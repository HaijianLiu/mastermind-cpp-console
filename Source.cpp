#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include "TilteScreen.h"
#include "GameScreen.h"


int main(void) {
  // Initiate Menu
  char menu = 50;

  // Initiate Class
  TilteScreen titleScreen;
  GameScreen gameScreen;

  // Random Seed Initiate
  srand((unsigned)time(NULL));

  // Main Title + Game Loop
  while (menu == 50) {

    // Title Screen
    titleScreen.MainTitleFunction();
    titleScreen.MainTutorialFunction();

    // Start Main Game
    menu = 49;

    // Main Game Loop
    while (menu == 49) {
      // Initiate
      system("cls");
      gameScreen.PrintTitle();
      gameScreen.SetPassword();

      // Main Check Loop
      while (gameScreen.GetScore(0) < 4 && gameScreen.GetTimes() < 15) {
        gameScreen.PrintTimes();
        gameScreen.InputPassword();
        gameScreen.ResetScore();
        gameScreen.CheckPassword();
        gameScreen.TimesPlus();
      }

      // Game Over
      gameScreen.GameOver();
      menu = gameScreen.GetKey();

      // Reset Password & User Input
      gameScreen.ResetGame();
    }
  }

  return 0;
}
