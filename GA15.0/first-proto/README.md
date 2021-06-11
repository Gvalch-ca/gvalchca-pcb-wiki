# GA15.0 First Proto

This version of the PCB isn't officially added to QMK and VIA.
It uses the same matrix as release version GA15.0, though, so it SHOULD be recognised by VIA and work fine.

_____

![Photo](https://i.imgur.com/xuOA36c.jpeg)

_____

## How to use the firmware

You can find all source files, as well as .hex firmware files, in `firmware` folder above.
If you want to compile your own firmware, download `ga150fp` folder and add it to your `qmk-firmware/keyboards/gvalchca` folder. Then modify the files and compile the firmware with
```
qmk compile -kb gvlachca/ga150fp -km YOUR-KEYMAP-NAME
```

Otherwise, you can use pre-compiled .hex files.
If you want to use VIA:
1. Flash your PCB with `gvalchca_ga150fp_via.hex` for VIA support.
2. Open VIA. PCB should be recognised automatically.
3. If it isn't, go to `DESIGN` tab and upload `ga150fp.json` file.
4. After that PCB is configurable until you close VIA app.
