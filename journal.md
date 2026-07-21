## Day 1 (July 18, 2026)

mainly followed scottokeebs's guide for the most part and was able to:
- assembled the first draft of the PCB for the keyboard

not finalized yet!
- made a rudimentary case for the PCB

does not look good

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

## Day 2 (July 19, 2026)
decided I should go with the kit parts except for the keycaps (i really want colored keycaps) and kailh sockets

also there will be no pcb assembly from jlcpcb because soldering these things aren't really that hard

time to rewire a lot of stuff

I decided not to go with under keycap LEDS because they'd take too long to figure out how they work and I can't be bothered with a rotary encoder either

ideally: https://milktooth.com/products/milky-pro-silent-linear

no way i have to add holes for the screws i forgot :(

values for later:
- -6.187494 in x
- 3.093757 in y

## misc links for days 1-2 because i forgot
- https://github.com/AcheronProject/acheron_MXH.pretty 

although this does provide the footprint for kailh mx-style sockets, it doesn't provide you with the 3d model which I had to find on my own. Originally I found it through some shady ahh website here: https://www.snapeda.com/parts/PG151101S11/Kailh/view-part/?company=hack+club& **but I realized after I inserted the 3d model that the scottokeebs library i downloaded already has the model**

Note that for both the website and the scottokeebs library the models need to be manually aligned inside kicad


## Day 3 (July 20, 2026)
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


## Day 4 (July 21, 2026)
Hey! so it's my exam day so I don't have a lecture to go to for today which is kind of great because I can do more things and also my violin lesson was moved to another day this week so that's great

as of right now, I've been checking the edges of all the parts to make sure that they work well and adjusting them if they don't fit the shape I want

<img width="1336" height="799" alt="image" src="https://github.com/user-attachments/assets/d0642113-5d6e-46f5-bbfb-620b49446ab9" />

*the edges i've been fixing*

I also figured out how to make better holes for the screws that I'll be receiving with the kit (don't extrude your holes with the 'plates' in order to adjust the length accordingly) also added an extra screw because I thought it wasn't enough

<img width="1643" height="1126" alt="image" src="https://github.com/user-attachments/assets/104bda41-114e-4abb-a356-b932ecac51d0" />

*added 5 screw holes into the case*

oh wait oops i messed up a bit i need to change it because this hole clips into the pcb and i just realized the holes go slightly into the acrylic which is not good so i'll change the heights of them
<img width="829" height="982" alt="image" src="https://github.com/user-attachments/assets/e96d47de-d583-4993-be48-c60380384d34" />

*the holes clip into wrong parts f*


