# Red Queen
## Alice-Inspired Split Mechanical Keyboard

![example](https://i.imgur.com/CcRmm1t.jpg)

![example](https://i.imgur.com/GLbhAl7.jpg)

![example](https://i.imgur.com/M3hJ0Lf.jpg)


## Components
- [ ] 1x Left Plate (CNC or Print)
- [ ] 1x Right Plate (CNC or Print)
- [ ] 1x Left Shell (Print)
- [ ] 1x Right Shell (Print)
- [ ] 1x Left Pro Micro Tray (Print)
- [ ] 1x Right Pro Micro Tray (Print)
- [ ] 2x I/O Shield (Print)
- [ ] 8x Leg (Print)
- [ ] 8x Splined Insert (Print)

## Hardware
- [ ] 64x Switches (cherry compatable)
- [ ] 64x 1N4148 Diodes
- [ ] 2x Pro Micro
- [ ] 2x TRRS Jack
- [ ] 5x 2u Costar Stabilizers
- [ ] 3x Resistors (2x 4.7k ohm for I2C pullups, 1x 150 ohm for led)
- [ ] 64x Amoeba PCB (optional)
- [ ] 1x LED (caps lock, optional)
- [ ] 21x M3 x 8mm Countersunk Machine Screw
- [ ] 8x M3x16 Thumbscrew
- [ ] 8x M3 Nut
- [ ] 8x 6.5mm ID Rubber Cap (feet for tenting legs)
- [ ] 8x M3 Washer
- [ ] 8x Adhesive Rubber Foot (optional)
- [ ] Wire

## Tools / Misc
- [ ] CNC Router (optional)
- [ ] 3d Printer
- [ ] Soldering Iron + Solder
- [ ] Multimeter
- [ ] Wire Cutters / Strippers / Flush Cutters
- [ ] Hex Drivers
- [ ] M3 Tap

## CNC Notes
The switch plates are routed out of 1/16" (1.58 mm) 6061 aluminum, using a 1/8" (3.175mm) end mill. STEP files are included for the plates in addition to STLs. These parts were designed around a hobbyist cnc router, hence the dogboned corners in the switch holes, and the rounded corners for the stabilizers. I imagine these could be reasonably 3d printed. 

![example](https://i.imgur.com/52ofGFi.jpg)

## Printing Notes
Print at 0.2mm layer height. To recreate the embossed Red Queen in the bottom of the left shell, use the color changing feature in your slicing software. Print one layer of black, then change filament for one layer of red, and then change back to print the the remainder in black. I did this for both halves.

![example](https://i.imgur.com/DZDPbTS.jpg)

You will need to add supports for the i/o opening in the back of the shells. I suggest using a support enforcer, which will save you cleaning up the holes for the legs.

![example](https://i.imgur.com/okjLwP4.jpg)

## Wiring
Rows are wired to pins C6, D7, E6, B4, B5. Columns are wired to F4, F5, F6, F7, B1, B3, B2, B6. The left hand side has only seven columns, and does not use the F4 pin.

![example](https://i.imgur.com/VJPJXuj.jpg)

I mounted an LED under the caps lock keycap. It is wired to D4.

![example](https://i.imgur.com/qUaEBwn.jpg)

I used Amoeba single-key PCBS to make wiring easier/neater.

![example](https://i.imgur.com/EpaskCz.jpg)

Insert the TRRS jack into the MCU tray before wiring. Remember to flush trim the leads on the bottom of the Pro Micro before sliding it into the holder.

![example](https://i.imgur.com/s3WTTxk.jpg)

## Assembly
Tap appropriate holes in the shells and MCU trays to M3. Insert M3 nuts into the corners of each shell, and press all the way down to seat. Attach the MCU tray along with the I/O Shield to the back of the shell. Arrange wires neatly, and attach the plate to shell with M3x8mm countersunk screws - use caution to not overtighten and strip the threads in the printed shell.

The inserts for the tenting legs can be rotated to six major positions, each with thirteen minor positions. This should provide decent adjustability. There's a notch on the insert to help with orientation.

![example](https://i.imgur.com/VsJujLC.jpg)

## Firmware
I used [QMK firmware](https://qmk.fm/) - there's an included keyboards folder for compiling/flashing your own keyboard. 

