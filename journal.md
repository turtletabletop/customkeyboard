## Day 1 (July 18, 2026) (~5 hours)

mainly followed scottokeebs's guide for the most part and was able to:
- assembled the first draft of the PCB for the keyboard

<img width="1350" height="900" alt="image" src="https://github.com/user-attachments/assets/1f0cce75-645a-4bfb-be48-712096c2d512" />


not finalized yet!
- made a rudimentary case for the PCB

<img width="1056" height="689" alt="image" src="https://github.com/user-attachments/assets/7c15d39c-177f-47e4-8f58-014d23e06caf" />

does not look good, also the pcb slows down onshape so much

### design considerations:
note that I want the keys to be hotswappable now so I need to change the configuration and figure out which mounts are needed
hotswappable keys are nice for testing future switches
- https://jlcpcb.com/partdetail/Kailh-CPG151101S111/C5184526
- kalih == cherry mx switches standard
- https://github.com/AcheronProject/acheron_MXH.pretty (footprint?)

purple and pink case, with blue pcb, lavender keycaps

figure out how to get pcb with traces so that I can tell where the pcb art is gonna be

<img width="507" height="319" alt="image" src="https://github.com/user-attachments/assets/d73c331a-9f56-4fc5-bbf8-1585c4cdc7c8" />


### switches/keycap wants for the "first" iteration:
- **silent** "creamy" linear switches would be ideal
- 45 (gf) gram force similar to what a midi offers
- lavender keycaps

Order from JLCPCB because they can assemble the PCB with the parts soldered on for me

### things to work on tomorrow: 
- figure out the full PCB design, finalize it
- design a good-looking case for the board
- start looking at qmk

## Day 2 (July 19, 2026) (~6 hours)
decided I should go with the kit parts except for the keycaps (i really want colored keycaps) and kailh sockets

also there will be no pcb assembly from jlcpcb because soldering these things aren't really that hard

time to rewire a lot of stuff

I decided not to go with under keycap LEDS because they'd take too long to figure out how they work and I can't be bothered with a rotary encoder either

ideally: https://milktooth.com/products/milky-pro-silent-linear

no way i have to add holes for the screws i forgot :(

values for later:
- -6.187494 in x
- 3.093757 in y

ok, at the end of this day I kind of wasted a bunch of time trying to place a pcb into a board with all the components which was very bad for my time usage because it didn't even end up working

## misc links for days 1-2 because i forgot
- https://github.com/AcheronProject/acheron_MXH.pretty 

although this does provide the footprint for kailh mx-style sockets, it doesn't provide you with the 3d model which I had to find on my own. Originally I found it through some shady ahh website here: https://www.snapeda.com/parts/PG151101S11/Kailh/view-part/?company=hack+club& **but I realized after I inserted the 3d model that the scottokeebs library i downloaded already has the model**

Note that for both the website and the scottokeebs library the models need to be manually aligned inside kicad


## Day 3 (July 20, 2026) (~8 hours)
i kind of forgot that today was a new day because I was up at 2:00 am today working on this

anyways i'll be modeling my journal entries better hopefully because i found THIS: https://codex.hackclub.com/shipping/example-journal/
a lot of hack club is buried under niche keyword searches and random findings a lot of the time


updates to the pcb:
- i changed the keycaps to the DSA kit keycaps given in hackpad
- thats all?

damn i really thought i could be done by today but it's really not the case


speaking of cases: that's really what I need to work on today! 

I found out by searching that there are many different ways of mounting your PCB to your case: important link here- https://shop.marvo-tech.com/blogs/all/custom-mechanical-keyboards-parts

here's a tldr for that page-- they have a cheat sheet right here

<img width="535" height="444" alt="image" src="https://github.com/user-attachments/assets/ca11f0e0-80cb-4e55-9d91-ec43415c4e5d" />

I've seen the keyword sandwich mount before in the hackpad channel so that's the one I'm going for, also I found scottokeebs video on making cases and mounting plates so i'm definitely going to watch it

edit: this before the next link- https://www.keyboard-layout-editor.com/#/

i found this mounting plate site during my math lecture: https://builder-docs.swillkb.com/

so like it turns out i don't actually need the screws in the pcb so darn.

i figured out how to put the pcb in onshape that so it actually runs in onshape wahoo (why did this take forever)

<img width="1477" height="900" alt="image" src="https://github.com/user-attachments/assets/1f30b4c6-8d7e-4f7c-9a2f-d2b7e41ca81f" />

first actual iteration of the board! also i colored it purple later

## Day 4 (July 21, 2026) (~5 hours)
Hey! so it's my exam day so I don't have a lecture to go to for today which is kind of great because I can do more things and also my violin lesson was moved to another day this week so that's great

as of right now, I've been checking the edges of all the parts to make sure that they work well and adjusting them if they don't fit the shape I want

<img width="1336" height="799" alt="image" src="https://github.com/user-attachments/assets/d0642113-5d6e-46f5-bbfb-620b49446ab9" />

*the edges i've been fixing*

I also figured out how to make better holes for the screws that I'll be receiving with the kit (don't extrude your holes with the 'plates' in order to adjust the length accordingly) also added an extra screw because I thought it wasn't enough

<img width="1643" height="1126" alt="image" src="https://github.com/user-attachments/assets/104bda41-114e-4abb-a356-b932ecac51d0" />

*added 5 screw holes into the case*

update: removed the screw in the middle of the case because it collided with the pcb 

<img width="1360" height="900" alt="image" src="https://github.com/user-attachments/assets/31c46d9a-96b3-45e0-b2ae-13d46f0818bc" />

and also i added a usb-c cutout!

<img width="1153" height="900" alt="image" src="https://github.com/user-attachments/assets/d52dde07-2133-4c1d-a1a5-46ef2fbb2ec9" />

also i added more decals to my board!

## day 5 (July 22, 2026) (~3.5hr)
I have no idea what i'm doing but i was able to get qmk setup with a lot of patience and waiting for files to load, and now i have a rudimentary firmware to push

<img width="954" height="1184" alt="image" src="https://github.com/user-attachments/assets/083f4c6a-f5c2-4fce-b1a3-da9ed8bd3fb3" />
<img width="838" height="1238" alt="image" src="https://github.com/user-attachments/assets/47c5a925-b59a-4467-a50a-930025f5b618" />

holy freaking sheet basically went through the pricing for the macroboard and found out that i sized my pcb wrong so i was getting a much higher quote at jlcpcb than what i was actually supposed to get, so i had to redo the edge cuts for the pcb

<img width="949" height="950" alt="image" src="https://github.com/user-attachments/assets/71e2734a-e9cf-460f-ba00-90fe9acd0311" />

*the new square rather than rectangle pcb*

i was also worried about the clear part of my mounting board so i found out that jlcpcb also 3d prints resin parts so hopefully i can use their services because it was pretty cheap from what i saw

also about resizing my pcb, i had to completely redo the case. thankfully, i've learned from my past experiences and actually know what i want. basically i was walking blind through my case last time which helped me know a lot about what i needed for my case this time, and decided to simplify it a ton more because the case was pretty complicated last time. also i know how to simplify the pcb so that it actually runs on my onshape this time :)
<img width="1007" height="873" alt="image" src="https://github.com/user-attachments/assets/38f0ea79-db74-4d27-bdbd-0b567516b328" />

*the new simplified case*
