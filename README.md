# ultraergo
QMK keyboard definition for the apparently discontinued ultraergo split wireless keyboard.

![](https://raw.githubusercontent.com/thennen/ultraergo/master/finished.jpeg)

The most sane keyboard design I have ever seen was on the market for only a year or two before mysteriously disappearing. It has low-profile, non-"mechanical" keys, and it is split into two wireless halves, with no ugly jumper cable connecting them. Plus, it comes with attachments for tenting.  Since there has never been a real alternative on the market, I have gone through insane efforts to keep using the ultraergo over the past decade.

Eventually the wireless connection became flaky and unusable, so I converted it into two separate wired keyboard halves using a pair of ItsyBitsy 32u4 microcontrollers and the QMK firmware. I reused the existing USB mini charging ports for the data connections and rewired the buttons on the back side to perform reset/enter bootloader mode. This was successful, but involved a non-trivial amount of wiring and reverse engineering.

![](https://raw.githubusercontent.com/thennen/ultraergo/master/wiring1.jpeg)

Another benefit of doing this is that you can remap the left and right halves of the spacebar independently, which was impossible with the original board.  I use the left side for the Enter key, which has been great.

Independent left/right sides means you can't do hardware level layers/combinations that involve both halves. But this is much easier to handle at the OS level anyway, for example by using the great (but not free) program KbdEdit.

To compile and flash this you need to install a 4 GB monstrosity called QMK MSYS. When you first open QMK MSYS, give it this command:

qmk setup

Which will take 10 minutes and download every keyboard layout ever defined by anyone in the world. Clone this repo to %userprofile%\qmk_firmware\keyboards\ 

qmk wants to use its own python installation e.g. c:\qmk_msys\mingw64\lib\python3.8
so unset these variables to avoid using the wrong python:

unset PYTHONHOME
unset PYTHONPATH

I didn't bother to figure out how to autodetect left and right sides, I just specify it manually.

to compile:

qmk compile -kb ultraergo -km left_hennen

this dumps a hex file %userprofile%\qmk_firmware\ultraergo_left_hennen.hex, which can be flashed with qmk_toolbox.exe

to compile and flash:

qmk flash -kb ultraergo -km left_hennen

which will prompt you to put the keyboard into bootloader mode.
press reset button twice for bootloader mode.
alternatively: avrdude -P COM5 -p ATmega32u4 -c avr109 -b1200
