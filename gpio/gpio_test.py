import RPi.GPIO as g
import time

g.setmode(g.BCM)
g.setup(26, g.OUT)
for i in range(1, 20):
  g.output(26, True)
  time.sleep(1)
  g.output(26, False)
  time.sleep(1)
