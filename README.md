UC Davis - OliView
=======

This year for the 2014 iGEM competition, we have created a nanoamp capable potentiostat. The schematic, board, and software are all included above.

Main Folder: This is the raw QT Creator files needed to run the OliView software. 

OliView Board:  This contains the schematic, board layout (Eagle V6.6), and parts list for the OliView Version 2.0 PCB. It also contains the Teensy/Arduino sketch required by the Teensy 3.1 microcontroller. CAM files are provided for easy PCB manufacturing. The board can be ordered directly from seeedstudios.com using the provided OliViewV2_0.zip.

Getting Started:

1. First we need to fabricate our PCB. Use eagle to create CAM files for PCB production from the provided board files in the OliView Board folder. Alternatively, you can use the OliView2_0.zip file which contains CNC instructions to fabricate the board. The .zip file has been optimized for production from seeedstudios and can be uploaded to their purchasing form directly. 

2. Order all the parts contained in the parts list. Be sure to order the teensy with pins.

3. Populate the PCB with parts. This step requires the soldering of surface mounted ICs, there are many tutorials on YouTube describing proper technique and best practices. Solder pins onto the following teensy microcontroller pin slots: AREF, DAC, 3.3V, & GND.

4. Strip an old USB mini cable to expose the four colored wires. Attach your alligator clips to the following leads: working electrode-red, counter electrode-black, reference electrode-white.

5. Follow the getting started instructions provided on the Teensy website. Download the Teensy 3.1 OliView sketch and upload it to the Teensy using the standard upload procedure. Plug the microcontroller into the OliView breakout board.

6. Download and extract the main github folder. Open the .pro file with Qt Creator. Plug in your new potentiostat and your  and being your experiments!




