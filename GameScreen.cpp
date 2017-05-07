#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include "GameScreen.h"

GameScreen::GameScreen(){
  score[0] = 0;
  score[1] = 0;
  password[0] = 11;
  password[1] = 11;
  password[2] = 11;
  password[3] = 11;
  times = 1;
}

GameScreen::~GameScreen(){
}
