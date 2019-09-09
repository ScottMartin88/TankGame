class bullet{
private:
	float xPosition;
	float yPosition;
	float dirRadions;
	float direction;
	float speed;
	float fireSpeed;
	bool active;
public:
	bullet()
	{
		xPosition = -4.0f;
		yPosition = 10.0f;
		dirRadions = 0.0f;
		direction = 0.0f;
		speed = 0.0f;
		fireSpeed = 0.0000008;
		active = false;
	}
	//getters
	bool getActive(){
		return active;
	}
	float getXPosition(){
		return xPosition;
	}
	float getYPosition(){
		return yPosition;
	}
	float getDirection(){
		return direction;
	}
	
	//setters
	bool setActive(bool activeSwitch){
		active = activeSwitch;
		return active;
	}

	float setXPosition(float x){
		xPosition = x;
		return xPosition;
	}
	float setYPosition(float y){
		yPosition = y;
		return yPosition;
	}
	float setDirRadions(float x, float y){
		dirRadions = x + y;
		return dirRadions;
	}
	float setDirection(float x, float y){
		direction = x + y;
		return direction;
	}


	//methods
	float moveXPosition(float x){
		xPosition = x + (speed * (cos(dirRadions)));
		return xPosition;
	}
	float moveYPosition(float y){
		yPosition = y + (speed * (sin(dirRadions)));
		return yPosition;
	}
	void hideBullet(){
		xPosition = 10;
		yPosition = 10;
		speed = 0;
		active = false;
	}
	float setSpeed(float scaleFactor){
		speed = fireSpeed * scaleFactor;
		return speed;
	}
};