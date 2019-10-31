#!/usr/bin/env python

import serial
import pygame
import random

port = "/dev/ttyUSB0"
rate = 9600

s1 = serial.Serial(port, rate)
s1.flushInput()

songs = ['knap_op']

pygame.init()
pygame.mixer.init()
sound = pygame.mixer.Sound(random.choice(songs) + '.wav')
sound.set_volume(0.1)

while True:
  inputValue = s1.readline()
  
  if "PLAY" in str(inputValue):
    if pygame.mixer.get_busy():
      print('stopping audio..')
      sound.stop()
    else:
      print('playing audio..')
      sound.play()