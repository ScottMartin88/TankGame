#include <string>
using namespace std;
#include "bullet.h"

class tanks{
public:
	bullet * firedBullet;

	//button pressed variables
	bool firing;
	bool accelerating;
	bool deccelerating;
	bool turningLeft;
	bool turningRight;
	bool turretTurningLeft;
	bool turretTurningRight;

	//Speed manipulation variables
	float acceleration;
	float speed;
	float maxSpeed;
	float reverseSpeed;

	// directional variables
	float turretDirection;
	float turretRadions;
	float direction;
	float dirRadions;

	// Position variables
	float xPosition;
	float yPosition;
	float zPosition;

	float powerUpCounter;
	bool speedPowerUpActive;
	bool godModePowerUpActive;
	//CONSTANT radion variable
	const float radions = 0.01745f;

	bool destroyed;

	

	tanks()
	{

		//button pressed variables
		firing = false;
		accelerating = false;
		deccelerating = false;
		turningLeft = false;
		turningRight = false;
		turretTurningLeft = false;
		turretTurningRight = false;

		//Speed manipulation variables
		acceleration = 0.000000003f;
		speed = 0.0f;
		maxSpeed = 0.05f;
		reverseSpeed = -0.02f;

		// directional variables
		turretDirection = 0.0f;
		turretRadions = 0.0f;
		direction = 0.0f;
		dirRadions = 0.0;

		// Position variables
		xPosition = 0.0f;
		yPosition = 0.0f;
		zPosition = 0.0f;

		destroyed = false;

		firedBullet = new bullet;

		powerUpCounter = 0;
		speedPowerUpActive = false;
		godModePowerUpActive = false;
		}

	tanks(float startingSpeed){
		speed = startingSpeed;
	}

	~tanks()
	{
		delete[] firedBullet;
		firedBullet = NULL;
	}
};

