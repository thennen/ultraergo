# ultraergo
QMK keyboard definition for the apparently discontinued ultraergo split wireless keyboard.

![](https://raw.githubusercontent.com/thennen/ultraergo/master/finished.jpeg)

The most sane keyboard design I have ever seen was on the market for only a year or two before mysteriously disappearing.

Eventually the wireless connection on mine became flaky and unusable, so I converted it into two independently wired keyboards using the QMK firmware.

I reused the existing USB mini charging ports for the data connections and rewired the buttons on the back side to perform reset/enter bootloader mode.

This was successful but involved a non-trivial amount of wiring and reverse engineering.

![](https://raw.githubusercontent.com/thennen/ultraergo/master/wiring1.jpeg)

Chances of anyone out there owning this keyboard and also wanting to do this is approximately zero.

To compile and flash this you need to install a 4 GB monstrosity called QMK MSYS.
