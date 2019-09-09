
#include <string>
using namespace std;
#include "tanks.h"
#include "powerup.h"
#include "windows.h"
#define PLAYER_SIZE 2
#define idealFPS 60
#define idealDelta 1000/idealFPS
class gameData{
public:
	tanks * tankArr;
	powerUp * gamePowerUp;
	float tankColision;
	float bulletCollision;
	float powerUpTimer;
	DWORD frameStartTime;
	DWORD frameEndTime;
	float currentDelta;
	float scaleFactor;
	bool gameRestart;

	gameData(){
		frameStartTime = 0;
		frameEndTime = 0;
		currentDelta = 0;
		scaleFactor = 0;
		
		tankArr = new tanks[PLAYER_SIZE];
		gamePowerUp = new powerUp;
		tankColision = 0.27f;
		bulletCollision = 0.1f;
		powerUpTimer = 1;
		gameRestart = false;
	};
	~gameData(){
		delete[] tankArr;
		tankArr = NULL;
		delete gamePowerUp;
		gamePowerUp = NULL;
	}
};