# Candy the Catacorn

Catacorn Badge :D I don't care how you spell it, I've spelled it catacorn for years. Caticorn is equally valid! It's really small, and cute - but you should be able to program it to do a lot of things.

You can [order from OSH Park](https://oshpark.com/shared_projects/ZzWxhv0r) - that's not a sponsored link, and they're by no means the cheapest place to order from, I only link as they're probably the cheapest way to get a small number of purple boards with a lead-free finish (good as they'll be handled!) - and their service has always been good to me.

## Background

I have wanted to learn more about electrical engineering and the 'hardware' side of things, so have started playing with dev boards including the Adafruit Trinket M0, which is the board that inspired this project. But none of them were catacorn enough, so I decided to make one :)

## Copyright/Liability

I'm posting this as a learning project with no intent to make a profit. I used a lot of bits of source material (see thanks below), and thus as I am not a lawyer, I can't comment as to rights other than to say that I claim no rights to my creation other than the right to continue using it and modifying it myself - use what I did as you please :) But... it'll probably take some re-imagining of the design for it to be truly original.

Also, I'm obviously not responsible for injuries or anything like that - this is definitely not a safety-tested, commercial project. Build at your own risk. It probably won't even work :)

## Basic Features

- ATSAMD21 microcontroller (ARM Cortext M0)
- Lots of LEDs, including two RGB ones (Dotstar-compatible)
- Two capacitive touch zones (ears)
- Native USB (you can even use it as a keyboard, hopefully)
- Probably a fair number of bugs and bad design decisions!

## Bill of Materials

| Component                               | Manufacturer                 | Qty |
|-----------------------------------------|------------------------------|-----|
| This board                              | Whoever you choose           | 1   |
| ATSAMD21E18A-AU-ND                      | Microchip Technology         | 1   |
| S2B-PH-SM4-TB(LF)(SN)                   | JST                          | 1   |
| 1uF 0603 Capacitor                      | Any                          | 2   |
| 10uF 0603 Capacitor                     | Any                          | 2   |
| APA102-5050 or Equivalent (e.g. SK9822) | APA Electronic Co (or other) | 2   |
| JE2835AWT-00-0000-000A0ZF940E           | Cree Inc                     | 2   |
| Pink LED 0805                           | Generic                      | 2   |
| Turquoise LED 0805                      | Generic                      | 3   |
| UV/Purple LED 0805                      | Generic                      | 3   |
| AP2112K-3.3TRG1                         | Diodes Incorporated          | 1   |
| DSS14UTR                                | SMC Diode Solutions          | 2   |
| USB3076-30-A                            | GCT                          | 1   |
| 150 Ohm 1206 Resistor                   | Any                          | 2   |
| 180 Ohm 0805 Resistor                   | Any                          | 2   |
| 180 Ohm 0603 Resistor                   | Any                          | 3   |
| 330 Ohm 0805 Resistor                   | Any                          | 3   |
| TL3342 Switch (or equivalent)           | E-Switch (or generic)        | 1   |

## How to use?

This board is intended to be used with CircuitPython. I have cloned and modified others [bootloader](https://github.com/MermaidAllie/uf2-samdx1/tree/master/build/alliecat_candythecatacorn) and [CircuitPython firmware](https://github.com/MermaidAllie/circuitpython/blob/5.0.x/ports/atmel-samd/build-alliecat_candythecatacorn/firmware.uf2). These are very similar to the Adafruit Trinket M0, just rebranded basically, and you can use Adafruit Trinket M0 bootloader/firmware with a lot of success (it's how I prototyped this).

## Thanks

Thank you to the following people:

- Ladyada and [Adafruit](https://learn.adafruit.com/how-to-program-samd-bootloaders/trinket-m0-wiring) - for building excellent products and teaching people electronics. I used a lot of Trinket M0's in prototyping this. Seriously, people, go buy their products - they're fantastic (and the boards are way cuter than some others, especially look at the Metro M4 Express - it's just adorable).

- Various inspirations for the catacorn, but especially to the kid who asked me to paint their face as a catacorn when I was face painting some years ago. It was the first time I really started thinking what the features of a catacorn should be like. I hope you're doing well today, and I wish you all the best in life :) - also to the many people who've drawn catacorns (and caticorns and unicats) online, and I've taken inspiration from.

- Also, on that note, credit to [Lisa Frank](https://lisafrank.com/) because cute Lisa Frank images were one of my childhood inspirations, and they're just awesome and made me like this style of art. A Google image search gave me more ideas for how to draw the board outline and even how to place components to be part of the art (e.g. using a capacitor as a nose, as one drawing I found had a very square nose). The purple Lisa Frank cat, especially, gave me the idea for how the whiskers could work on a component-kitty. And, only in Lisa Frank land do RGB LED cat eyes make sense :) 

- I used [this image from Freepik](https://www.freepik.com/free-vector/kawaii-style-unicorn-character-collection_4697393.htm#page=1&query=kawaii%20unicorn&position=7) as inspiration for the general shape of the base (I needed something flatter than most to get the micro USB port in, and I liked how the cat's belly sat down) and head angle of the catacorn, and also for the style of the heart outline on the cheek.

- [Emojipedia](https://emojipedia.org/) came in really useful to for bits of emoji-inspired inspiration, and the capacitive touch zones (which are the heart emoji from a font on my system).

- Q - for being an awesome friend who has helped with so much of the EDA side of working this all out. Thank you for answering late night messages with silly questions!

- Charlie - for coming up with the name Candy! I love you bestie :D Without your encouragement and inspiration, I wouldn't have achieved half the things I have with tech. Thank you <3

- JoJo Siwa - because the inspirational quote comes from one of your songs, and your concert on the [D.R.E.A.M. tour](https://www.jojodreamtour.com/) I went to in Cardiff was amazing. I'm not sure if it's your original quote tho, so I didn't quote it as you - I think I've heard it before? Either way, very inspiring performance! Keep things fun and positive and spread the positive energy, people!
