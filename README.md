# 3x5skymacropad

Hey everyone! This is my submission for [Hackpad V5](https://hackpad.hackclub.com/), a YSWS program in [Hack Club](https://hackclub.com/).

This macropad is a custom-built 3x5 ortholinear keyboard with an OLED display. It uses Kailh Hot Swap Sockets, so it supports a variety of MX-style switches, and uses QMK firmware.

## Features
- 15 programmable keys
- 128x32 OLED screen
- rad pcb silkscreen art
- QMK firmware

## CAD + Case
[Onshape link](https://cad.onshape.com/documents/501449d828c00fab2d0b549b/w/615af9d6281a356a4f3616d7/e/420bb48ea47a66a72aa17e60?renderMode=0&uiState=6a62d55ca501a73d441c5f80):

<img width="782" height="584" alt="image" src="https://github.com/user-attachments/assets/c6a93661-fac4-4686-8548-5de203c0f75b" />

I used Onshape for the CAD because I have previously used Onshape for FRC, and I thought Fusion360 was for nerds + online link sharing is fun!

Note that the mounting plate is intended to be fully transparent and made of acrylic/resin/any other clear material that can be used for a mounting plate. First time using Onshape for anything outside of robotics. Kept the case pretty simple. 

## PCB
The entire PCB was made in KiCad! Note that I used [ScottoKeeb's KiCad library](https://github.com/joe-scotto/scottokeebs/tree/main/Extras/ScottoKicad) for the footprints and symbols because I was following [his guide](https://youtu.be/8WXpGTIbxlQ?). I had a lot of fun adding the silkscreen art for this; I just ripped a bunch of pictures from indie games I love + SkyCOTL. First time making a PCB! 

<img width="434.5" height="433.5" alt="image" src="https://github.com/user-attachments/assets/db6c49d4-12f8-4caf-9c0b-79bf02c050e9" />

*without filled zones*

<img width="433" height="426" alt="image" src="https://github.com/user-attachments/assets/8d8a7728-b057-4fdd-828b-a004fcbde07c" />

*with filled zones*

## PCB Schematic
dunno what to say here honestly just copied skottokeeb's guide for the most part

<img width="1087" height="788" alt="image" src="https://github.com/user-attachments/assets/11b55701-a27a-4736-aac3-759b858148cc" />

## Specifications
### Hardware used:
- Seeed Studio XIAO RP2040
- Kailh Hot Swap Sockets
- 128x32 OLED Screen

### Bill of Materials (BOM):
- 15x Cherry MX Switches
- 15x DSA Keycaps
- 1x Seeed Studio XIAO RP2040
- 4x M3x16mm SHCS Bolts
- 4x M3x5x4 Heatset inserts
- 1x 0.91" 128x32 OLED Display

    A screenshot of your case and how it'll fit together
