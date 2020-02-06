# Candy the Catacorn
# based on Adafruit Trinket M0 Demo File

import board
from digitalio import DigitalInOut, Direction, Pull
from analogio import AnalogOut, AnalogIn
import touchio
import adafruit_dotstar as dotstar
import time

# Eyes :D
number_stars = 2
stars = dotstar.DotStar(board.APA102_SCK, board.APA102_MOSI, number_stars, brightness=0.15)

# Eye Corners
catEyes = DigitalInOut(board.D13)
catEyes.direction = Direction.OUTPUT
paws = DigitalInOut(board.D0)
paws.direction = Direction.OUTPUT

# Capacitive Touch Setup
touch_left_ear = touchio.TouchIn(board.D3)
touch_right_ear = touchio.TouchIn(board.D1)

# Helper to give us a nice color swirl
def wheel(pos):
    # Input a value 0 to 255 to get a color value.
    # The colours are a transition r - g - b - back to r.
    if (pos < 0) or (pos > 255):
        return (0, 0, 0)
    if pos < 85:
        return (int(255 - pos*3), int(pos*3), 0)
    elif pos < 170:
        pos -= 85
        return (0, int(255 - (pos*3)), int(pos*3))
    else:
        pos -= 170
        return (int(pos*3), 0, int(255 - pos*3))

######################### MAIN LOOP ##############################

i = 0
while True:
    for s in range(number_stars):
        stars[s] = wheel(i & 255)
    catEyes.value = touch_right_ear.value
    while touch_right_ear.value:
        for s in range(number_stars):
            stars[s] = (0, 127, 255)
    paws.value = touch_left_ear.value
    while touch_left_ear.value:
        for s in range(number_stars):
            stars[s] = (255, 127, 63)

    i = (i+1) % 256  # run from 0 to 255
    #time.sleep(0.01) # make bigger to slow down
