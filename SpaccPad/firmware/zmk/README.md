# SpaccPad ZMK frimware
## This firmware is created by NeonKnight. As for 2021.07.24, it is untested. Please read NeonKnight's instructions below before useing this firmware.

This is a ZMK port of Gvalchca's SpaccPad firmware which uses SI (Space Invaders) style switches for a macro pad with the capabilities of using two encoders.

Using a Nice!NanoV2 this will allow the pro micro to be swapped and a 110 Mah battery placed beneath. Rough estimates on battery life are three months. It is best to swap out the pins that Gvalcha puts in for actual sockets so the battery can easily be accesed, it also gives addtional height for the battery to fit properly.

To use this firmware download it into a working ZMK installation under zmk/app/boards/shields/SpaccPadBT
As this is designed to use a Nice!NanoV2 that is what I reccommend but the pin outs can be made to work in any other ZMK compatible MCU by editing the overlay.
