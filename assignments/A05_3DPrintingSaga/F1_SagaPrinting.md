The clever reader would be able to predict that 3D printing on a larger scale ended up being much more difficult than anticipated. The dull reader probably picked up on it as well, as did the non-reader.

Converting .stls to gcode files that wouldn't be rejected by the printer, misprint, or turn the classroom into a big firey ball visible from space ended up being a tall order for nearly the entire class. Not to say that this was a personal failing on anyone's behalf -- we all were learning how to 3D print on the fly. However, the looming deadline of August 8th still loomed. Concerned with making sure I'd have all of my parts, I sought out an alternative route to make my parts a reality. I poked around on campus with my classmate, Adrian, to see if we could find any additional 3D printers on campus. Turns out, the engineering department had *three* 3D printers available. We were granted permission to use them and ended up spending a ton of time with the department's technician machinist, Frank. 

I downloaded three .stls to slice from [here](https://www.thingiverse.com/thing:3537287). We started printing the base with this Lulzbot Workhorse printer:
![LulzBotsmall](https://github.com/user-attachments/assets/9d327723-247a-4ba3-8dc5-20b4b5d25d6f)

While two of my pieces ended up printing up fantastically on this, the inner pot file had major issues... Check out the shift here (and the nail polish on my coffee table:)  
![HorizontalShiftsmall](https://github.com/user-attachments/assets/ba12cdbf-e932-4c7f-b27e-b2b50fca8bdb)

This was no fault of the printer, but rather an issue with .stl file itself- printing something with a little "nib" would prove difficult for someone new to 3D printing. The solution? I edited the .stl in Blender (Seen in F2_repairedPot.stl) to not have that component of the inner pot. The consequence of such an action was that I'd be unable to incorporating the irrigation system without drilling another hole, but this was a non-issue as I wasn't planning on implementing this feature with such a strict timeline. 

Speaking of timeline, the misprint was a major setback in terms of getting everything printed in time! However, it was almost a blessing in disguise, as it led to my introduction to an entire different type of 3D printing that used resin instead of PLA filament. There were a couple of FormLabs printers available for use while the PLA one was occupied and I ended up printing my new model in one of those bad boys: 
![FormLabssmall](https://github.com/user-attachments/assets/4e55b849-e3d7-4090-9705-ceb275056edf)

The resin printers used catridges of liquid resin (can be seen in F3_ResinCartridge.jpg) as opposed to spools of PLA filament... Unlike PLA printers, where one can see the filament building upon itself to create the final product, one is totally unable to see the work-in-progresss with the formlabs printer. The object is printed upside-down in the bottom tank of the printer (grey part) and will rise up once completed. In order to support upside-down printing, the slicer associated with the printer will generate a base and support structures for the project that will be cut off once the resin has cured. The support structures (attached to my final inner pot) look like this:
![Supportssmall](https://github.com/user-attachments/assets/da587794-fb38-4f5d-8112-89e3b3675fab)

3D printing and modeling was definitely my favorite part of this class. I'm glad that I went beyond the confines of the classroom to work on this part as I really did learn a lot! The applications of 3D Printing are myriad and I'd like to explore them more in the future. One of the most fascinating applications that I learned of was the modeling and printing cancerous growths that could be used by doctors to make sure that they had excised all of a tumor during surgery. They had one on hand and it looked like this: 
![F3_CancerModel](https://github.com/user-attachments/assets/b27df277-a1ad-45b1-968f-f5bc7327f7b8)




 
