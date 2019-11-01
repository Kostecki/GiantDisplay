#!/usr/bin/env python

import serial
import pygame
import random

port = "/dev/ttyUSB0"
rate = 9600

s1 = serial.Serial(port, rate)
s1.flushInput()

songs = [
  'albert_dans.wav',
  'alle_drikke_ud.wav',
  'bukser.wav',
  'bund_dit_shot.wav',
  'chug.wav',
  'daddy_dyrlund_ham.wav',
  'daddy_dyrlund_hende.wav',
  'der_skal_drikkes.wav',
  'drik_drik_drik.wav',
  'drik_ud.wav',
  'ecuador.wav',
  'fireball.wav',
  'hej_smukke.wav',
  'i_love_drinking.wav',
  'im_nice_right_now.wav',
  'jeg_ka_saa_godt_li_pir.wav',
  'klovn_1.wav',
  'klovn_2.wav',
  'knap_op_2.wav',
  'knap_op.wav',
  'laa_laa_laa.wav',
  'man_kan_vel_ikke_goere_for.wav',
  'orale.wav',
  'pong.wav',
  'put_it_in_the_air.wav',
  'putter.wav',
  'salsa_tequila.wav',
  'shots_squats.wav',
  'tar_en_lille_en.wav',
  'unz_unz.wav',
  'vafler_1.wav',
  'vafler_2.wav',
  'vafler_3.wav',
  'vafler_4.wav',
  'vafler_5.wav',
  'vafler_6.wav',
  'vitas.wav',
  'wasted.wav',
  'zenzyg.wav'
]

pygame.init()
pygame.mixer.init()
sound = pygame.mixer.Sound('audio/' + random.choice(songs))
sound.set_volume(0.1)

while True:
  inputValue = s1.readline()
  
  if "PLAY" in str(inputValue):
    if pygame.mixer.get_busy():
      print('stopping audio..')
      sound.stop()
    else:
      print('playing audio..')
      sound = pygame.mixer.Sound('audio/' + random.choice(songs))
      sound.play()