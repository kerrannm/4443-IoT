/*
 * This code is a mashup of some tutorials created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-soil-moisture-sensor
 */

#define AOUT_PIN 15 //  AOUT pin of moisture sensor
#define RED    12 //  R pin of traffic light module
#define YELLOW 13 //  Y pin of traffic light module
#define GREEN  14 // G pin of traffic light module

//It seems that for the sensor that I have, the higher the value = the drier environment detected
// If you run this with the sensor disconnected from the wires, the value you get is 4095 iirc

int veryDry = 4000;
int veryMoist = 2000;


void setup() {
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  // set the ADC attenuation to 11 dB (up to ~3.3V input)
  analogSetAttenuation(ADC_11db);
}

void loop() {
  int value = analogRead(AOUT_PIN); // read the analog value from sensor

  Serial.print("Moisture value: ");
  Serial.println(value);
  
  //basically no moisture
  if (value > veryDry)
  {
  digitalWrite(RED, HIGH);   // turn on
  digitalWrite(YELLOW, LOW); // turn off
  digitalWrite(GREEN, LOW);  // turn off
  }


  //some moisture
  // this can be triggered by putting the sensor in the palm of my hand & squeezing
  else if (value < veryDry && value > veryMoist)
  {
  digitalWrite(RED, LOW);   // turn on
  digitalWrite(YELLOW, HIGH); // turn off
  digitalWrite(GREEN, LOW);  // turn off
  }

  //Pretty dang moist
  // There needs to be a significant amount of moisture to trigger this
  else
  {
  digitalWrite(RED, LOW);   // turn on
  digitalWrite(YELLOW, LOW); // turn off
  digitalWrite(GREEN, HIGH);  // turn off
  }
  

  delay(500);


}