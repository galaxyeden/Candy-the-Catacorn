# Candy the Catacorn

Catacorn Badge :D I don't care how you spell it, I've spelled it catacorn for years. Caticorn is equally valid! It's really small, and cute - but you should be able to program it to do a lot of things.

## Background

I have wanted to learn more about electrical engineering and the 'hardware' side of things, so have started playing with dev boards including the Adafruit Trinket M0, which is the board that inspired this project. But none of them were catacorn enough, so I decided to make one :) 

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
| Pink LED 0805                           | Generic                      | 4   |
| Turquoise LED 0805                      | Generic                      | 4   |
| AP2112K-3.3TRG1                         | Diodes Incorporated          | 1   |
| DSS14UTR                                | SMC Diode Solutions          | 2   |
| USB3076-30-A                            | GCT                          | 1   |
| 150 Ohm 1206 Resistor                   | Any                          | 2   |
| 180 Ohm 0805 Resistor                   | Any                          | 2   |
| 180 Ohm 0603 Resistor                   | Any                          | 3   |
| 330 Ohm 0805 Resistor                   | Any                          | 3   |
| TL3342 Switch (or equivalent)           | E-Switch (or generic)        | 1   |

## How to use?

I have no idea yet. I haven't, you know, actually written any software for it or anything. I expect you can probably [flash the Adafruit Trinket M0 bootloader](https://learn.adafruit.com/how-to-program-samd-bootloaders/trinket-m0-wiring) to it, and treat it like one of the Trinket M0 boards... given I did use them a lot as an inspiration and in testing ideas. No idea though, as I haven't actually tested yet :)

Example code for the thing will come here in time, but for now, this is a board - software is up to you!

## Thanks

Thank you to the following people:

- Ladyada and [Adafruit](https://learn.adafruit.com/how-to-program-samd-bootloaders/trinket-m0-wiring) - for building excellent products and teaching people electronics. I used a lot of Trinket M0's in prototyping this. Seriously, people, go buy their products - they're fantastic (and the boards are way cuter than some others, especially look at the Metro M4 Express - it's just adorable).

- Various inspirations for the catacorn, but especially to the kid who asked me to paint their face as a catacorn when I was face painting some years ago. It was the first time I really started thinking what the features of a catacorn should be like. I hope you're doing well today, and I wish you all the best in life :) - also to the many people who've drawn catacorns (and caticorns and unicats) online, and I've taken inspiration from.

- Also, on that note, credit to [Lisa Frank](https://lisafrank.com/) because cute Lisa Frank images were one of my childhood inspirations, and they're just awesome and made me like this style of art. A Google image search gave me more ideas for how to draw the board outline and even how to place components to be part of the art (e.g. using a capacitor as a nose, as one drawing I found had a very square nose).

- Q - for being an awesome friend who has helped with so much of the EDA side of working this all out. Thank you for answering late night messages with silly questions!

- Charlie - for coming up with the name Candy! I love you bestie :D Without your encouragement and inspiration, I wouldn't have achieved half the things I have with tech. Thank you <3

- JoJo Siwa - because the inspirational quote comes from one of your songs, and your concert on the [D.R.E.A.M. tour](https://www.jojodreamtour.com/) I went to in Cardiff was amazing. I'm not sure if it's your original quote tho, so I didn't quote it as you - I think I've heard it before? Either way, very inspiring performance! Keep things fun and positive and spread the positive energy, people!
