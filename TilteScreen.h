#pragma once
class TilteScreen{
public:
	TilteScreen();
	~TilteScreen();
	void MainTitleFunction(){
	  system("cls");
	  PrintTitle();
	  rewind(stdin);
	  _getch();
	}
	void MainTutorialFunction(){
	  system("cls");
		PrintTutorial();
	  rewind(stdin);
	  _getch();
	}
private:
	void PrintTitle(){
	  // Title Screen
	  printf("\n");
	  printf("\n");
	  printf("\n");
	  printf("\n");
	  printf("                  _____         _              _____ _       _ \n");
	  printf("                 |     |___ ___| |_ ___ ___   |     |_|___ _| |\n");
	  printf("                 | | | | .'|_ -|  _| -_|  _|  | | | | |   | . |\n");
	  printf("                 |_|_|_|__,|___|_| |___|_|    |_|_|_|_|_|_|___|\n");
	  printf("\n");
	  printf("\n");
	  printf("\n");
	  printf("\n");
	  printf("\n");
	  printf("                                   PUSH START\n");
	  printf("\n");
	  printf("\n");
	  printf("\n");
	  printf("\n");
	  printf("                    (C) MASTERMIND is a code-breaking game\n");
	  printf("                     Invented by Mordecai Meirowitz in 1970\n");
	  printf("                           (C) MASTERMIND is resembles \n");
	  printf("                        an earlier pencil and paper game\n");
	  printf("                              (C) BULLS and COWS\n");
	}
	void PrintTutorial(){
	  printf("\n");
	  printf("\n");
	  printf("\n");
	  printf("\n");
	  printf("\n");
	  printf("                                  HOW TO PLAY\n");
	  printf("\n");
	  printf("\n");
	  printf("\n");
	  printf("                WIN : Break the <4-DIGIT CODE> within <14 TURNS>\n");
	  printf("\n");
	  printf("\n");
	  printf("\n");
	  printf("                             You will get a <HINT>\n");
	  printf("                      after each time you enter a code\n");
	  printf("\n");
	  printf("                                HINT <A> MEANS:\n");
	  printf("            How many digits are correct in <BOTH> NUMBER and POSITION\n");
	  printf("                                HINT <B> MEANS:\n");
	  printf("                  How many digits are correct <ONLY> in NUMBER\n");
	}
};
