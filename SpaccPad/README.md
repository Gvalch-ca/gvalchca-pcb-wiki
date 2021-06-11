# SpaccPad

SpaccPad is a numpad with additional row and column and 2 rotary encoders support. It features support for NMB Hi-Tek 725 "Space Invaders" switches. Left column also supports MX switches to showcase your novelties and artisans.

_____

## Photo

![Photo](https://i.imgur.com/R2Sh05v.jpeg)

_____

## Layouts

![Layouts](https://i.imgur.com/B3i3wNh.png)

_____

## Firmware

SpaccPad is QMK, VIA, and Vial compatible. Source files, as well as ready-to-use .hex files could be found in `firmware` folder above.

Personally I recommend you to use Vial (`gvalchca_spaccpad_vial.hex`). This allows for rotary encoders configuration without reflashing.

If you want to use VIA instead, follow this guide.
1. Download `gvalchca_spaccpad_via.hex` and flash your SpaccPad with it
2. Download `spaccpad.json`
3. Open VIA, go to DESIGN tab, and upload `spaccpad.json` there
4. Now your SpaccPad is fully configurable until you close VIA app

_____

## Complectation

Each SpaccPad comes with this stuff:
* PCB (assembled with diodes and resistors from factory) - 1
* Plate - 1
* Bottom - 1
* Reset button - 1
* Standoffs - 5
* Screws - 10
* Bumpons - 4
* Green wires - 2 (explained in build guide)

Optional addons:
* Pro Micro compatible microcontroller (Elite C or Pro Micro) - 1
* Alps EC-11 rotary encoders - 2
* Matching knobs in variety of colors - 2

_____

## Build guide

### Needed components
1. PCB, Plate, Bottom - 1
2. Pro Micro compatible MCU - 1
3. Wires - 2
4. Space Invaders switches and keycaps - up to 25
5. Standoffs and screws - 5 + 10
6. Bumpons - 4
7. (optional) Rotary encoders with knobs - up to 2
8. (optional) MX switches - up to 4
9. (optional) Reset button - 1

### Build process

#### 1. (optional) Solder the reset button as shown below.

![Pic](https://i.imgur.com/9SuIB8H.jpeg)

#### 2. (optional) Solder the rotary encoders.

#### 3. Solder the Pro Micro or similar MCU.

It should be soldered to the front side of the PCB, facing upwards (you should see the atmega controller after you solder the MCU).

Correct soldering is shown on the pic. Also on this pic you should see how rotary encoders are soldered.

![Pic](https://i.imgur.com/FlvA6NK.jpeg)

#### 4. Connect D0 and F4 to GND.

Do so only if you soldered rotary encoders. Use green wires from your box to do so. Correct soldering is pictured below.

![Pic](https://i.imgur.com/1CweTdd.jpeg)

#### 5. Solder the swithces and assemble everything together.

#### 6. Flash the MCU with firmware.