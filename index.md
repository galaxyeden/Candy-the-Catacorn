# Who is Candy? 🐈🦄

Candy is a catacorn (aka caticorn, unicat) - a cat-unicorn hybrid - who is here to make your day a little better with a flash of blinky LEDs and some sparkle! She loves having her ears petted, and will reward you with even more fun blinky things!

## Name

🍭 Candy 🍬

## Special Powers

- 🌈Eyes shine bright in many colours!
- 🔦Front paws light the way in excellent true white (95 CRI)!
- Ears respond to touch!

## Hates

- ☔ Water
- Metal things

## Care

- Likes reading C++ or Python, following the examples on GitHub
- Don't feed over 6V or she'll overheat
- 🔋Feed at least 3.3V or she'll get sleepy

## Teaching

- Custom derivitive of [MicroPython](https://micropython.org/) forked from [CircuitPython](https://circuitpython.org/) called [NyanPython](https://github.com/GalaxyAllie/nyanpython)
  - This was my original firmware, it creates a drive called NYANPY that files can be copied onto
  - Uses CircuitPython libraries to control capacitive touch, DotStar, etc
  - It works fine but was a bit annoying to have to update and maintain
  - Probably won't get updated again, unless someone else puts in the work and opens a pull request
  - Or, if there's a critical bug - let me know by opening an issue!
- Better choice: [PlatformIO](https://platformio.org/)
  - Program in C++ using familiar Arduino framework!
  - Custom board definition right in this repository
  - Works great with the awesome [Visual Studio Code](https://code.visualstudio.com/)
  - Sadly, does require you to install some software 😿
  - But, a much better experience awaits! 😻

In short - I'll be sending these boards to friends with the _PlatformIO_ version of the code, but I'm keeping _NyanPython_ around as it has the benefit of not needing any specific software to get started programming, which may be of benefit to someone.