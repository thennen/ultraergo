# ultraergo
QMK keyboard definition for the apparently discontinued ultraergo split wireless keyboard.

![](https://raw.githubusercontent.com/thennen/ultraergo/master/finished.jpeg)

The most sane keyboard design I have ever seen was on the market for only a year or two before mysteriously disappearing.

Eventually the wireless connection on mine became flaky and unusable, so I converted it into two independently wired keyboards using the QMK firmware.

I reused the existing USB mini charging ports for the data connections and rewired the buttons on the back side to perform reset/enter bootloader mode.

This was successful but involved a non-trivial amount of wiring and reverse engineering.

![](https://raw.githubusercontent.com/thennen/ultraergo/master/wiring1.jpeg)

Independent left/right sides means you can't do hardware level layers/combinations that involve both halves.
But this is much easier to handle at the OS level anyway, for example by using the great program KbdEdit.




Chances of anyone else out there owning this keyboard and also wanting to do this is approximately zero.

To compile and flash this you need to install a 4 GB monstrosity called QMK MSYS.

put ultraergo folder inside %userprofile%\qmk_firmware\keyboards\

qmk wants to use its own python installation e.g. c:\qmk_msys\mingw64\lib\python3.8
so:

unset PYTHONHOME
unset PYTHONPATH

I didn't bother to figure out how to autodetect left and right sides since C is a lousy language and QMK is just a horrifying project.

to compile:

qmk compile -kb ultraergo -km left_hennen

this dumps a hex file %userprofile%\qmk_firmware\ultraergo_left_hennen.hex, which can be flashed with qmk_toolbox.exe

to compile and flash:

qmk flash -kb ultraergo -km left_hennen

which will prompt you to put the keyboard into bootloader mode.
press reset button twice for bootloader mode.
alternatively: avrdude -P COM5 -p ATmega32u4 -c avr109 -b1200
