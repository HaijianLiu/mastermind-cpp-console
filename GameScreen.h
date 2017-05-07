#pragma once
class GameScreen
{
public:
	GameScreen();
	~GameScreen();

	void PrintTitle(){
		printf("+-----------------------------------------------------------------------------+\n");
		printf("|                             ENTER YOUR PASSWORD                             |\n");
		printf("|                                   * * * *                                   |\n");
		printf("+-----------------------------------------------------------------------------+\n");
	}

	void SetPassword(){
		bool check;
		int n;
		for (int i = 0; i < 4; i++) {
			do {
				n = rand()%10;
				check = true;
				for (int j = 0; j < 4; j++) {
					if (n == password[j]) {
						check	= false;
						break;
					}
				}
			} while(check == false);
			password[i] = n;
		}
	}

	int GetScore(int i){
		return score[i];
	}

	int GetTimes(){
		return times;
	}

	void TimesPlus(){
		times ++;
	}

	void PrintTimes(){
		printf("                       %02d     >     ", times);
	}

	void InputPassword(){
		for (int i = 0; i < 4; i++) {
			answer[i] = _getch();
			while(answer[i] > 57 || answer[i] < 48){
				answer[i] = _getch();
			}
			printf("%c ", answer[i]);
		}
		printf("    >     ");
	}

	void CheckPassword(){
		for (int j = 0; j < 4; j++) {
			if(answer[j]-48 == password[j]){
				score[0] ++;
			}else if(answer[j]-48 == password[0]){
				score[1] ++;
			}else if(answer[j]-48 == password[1]){
				score[1] ++;
			}else if(answer[j]-48 == password[2]){
				score[1] ++;
			}else if(answer[j]-48 == password[3]){
				score[1] ++;
			}
		}
		printf("A%dB%d\n", score[0],score[1]);
	}

	void GameOver(){
		if(score[0] == 4){
			printf("\n");
			printf("                                    CORRECT!\n");
			printf("                           PRESS <1> RESET A NEW GAME\n");
			printf("                           PRESS <2> RETURN TO TITLE\n");
			printf("                                    ");
			key = _getch();
			while (key<49 || key>50) {
				key = _getch();
			}
		}

		if(times == 15){
			printf("\n");
			printf("                                   GAME OVER\n");
			printf("                                    %d %d %d %d\n", password[0],password[1],password[2],password[3]);
			printf("                          PRESS <1> RESET A NEW GAME\n");
			printf("                          PRESS <2> RETURN TO TITLE\n");
			printf("                                    ");
			key = _getch();
			while (key<49 || key>50) {
				key = _getch();
			}
		}
	}

	char GetKey(){
		return key;
	}

	void ResetGame(){
		score[0] = 0;
	  score[1] = 0;
	  password[0] = 11;
	  password[1] = 11;
	  password[2] = 11;
	  password[3] = 11;
	  times = 1;
	}

	void ResetScore(){
		score[0] = 0;
		score[1] = 0;
	}
private:
	int password[4];
	char answer[4];
	int score[2];
	int times;
	char key;
};
