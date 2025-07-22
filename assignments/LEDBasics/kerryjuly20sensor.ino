const int trigPin = 11;   // TRIG pin of HC-SR04
const int echoPin = 12;  // ECHO pin of HC-SR04
const int green1 = 2;
const int green2 = 3;
const int yellow1 = 4;
const int yellow2 = 5;
const int red1 = 6;
const int red2 = 7;

void setup() {
  Serial.begin(9600);          // Start serial communication
  pinMode(trigPin, OUTPUT);    // TRIG is an output
  pinMode(echoPin, INPUT);     // ECHO is an input
  pinMode(green1, OUTPUT); // all of the lights are outputs
  pinMode(green2, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
}

void loop() {
  long duration;
  float distance_cm;

  // Clear the TRIG pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10 microsecond pulse to TRIG
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echo pulse duration (microseconds)
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance (cm)
  // Speed of sound = 343 m/s = 0.0343 cm/us
  distance_cm = (duration * 0.0343) / 2;

  // Print to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");


    //huge inefficient ugly block of if/else to determine which lights to toggle
    if(distance_cm < 3){
    digitalWrite(green1, HIGH);
    digitalWrite(green2, HIGH);
    digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, HIGH);
    digitalWrite(red1, HIGH);
    digitalWrite(red2, HIGH);
    }

    else if(distance_cm < 4){
    digitalWrite(green1, HIGH);
    digitalWrite(green2, HIGH);
    digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, HIGH);
    digitalWrite(red1, HIGH);
    digitalWrite(red2, LOW);
    }

    else if(distance_cm < 5){
    digitalWrite(green1, HIGH);
    digitalWrite(green2, HIGH);
    digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, HIGH);
    digitalWrite(red1, LOW);
    digitalWrite(red2, LOW);
    }

    else if(distance_cm < 6){
    digitalWrite(green1, HIGH);
    digitalWrite(green2, HIGH);
    digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, LOW);
    digitalWrite(red1, LOW);
    digitalWrite(red2, LOW);
    }

    else if(distance_cm < 8){
    digitalWrite(green1, HIGH);
    digitalWrite(green2, HIGH);
    digitalWrite(yellow1, LOW);
    digitalWrite(yellow2, LOW);
    digitalWrite(red1, LOW);
    digitalWrite(red2, LOW);
    }

    else if(distance_cm < 10){
    digitalWrite(green1, HIGH);
    digitalWrite(green2, LOW);
    digitalWrite(yellow1, LOW);
    digitalWrite(yellow2, LOW);
    digitalWrite(red1, LOW);
    digitalWrite(red2, LOW);
    }

    else if(distance_cm < 12){
    digitalWrite(green1, LOW);
    digitalWrite(green2, LOW);
    digitalWrite(yellow1, LOW);
    digitalWrite(yellow2, LOW);
    digitalWrite(red1, LOW);
    digitalWrite(red2, LOW);
    }


  delay(200);  // Wait half a second before next measurement
}