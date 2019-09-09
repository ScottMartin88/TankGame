class powerUp{
private:
	float xPosition;
	float yPosition;
	float xRandPosition;
	float yRandPosition;
	bool powerType;

public:
	powerUp()
	{
		xPosition = -9.0f;
		yPosition = -9.0f;
		powerType = true; //true = speed. false = invincibility.		
	}
	//Getters
	float getXPosition(){
		return xPosition;
	}
	float getYPosition(){
		return yPosition;
	}
	bool getPowerType(){
		return powerType;
	}

	//Setters
	void setXPosition(){
		xPosition = xRandPosition;
	}
	void setYPosition(){
		yPosition = yRandPosition;
	}
	void setXRandPosition(float position){
		xRandPosition = position;
	}
	void setYRandPosition(float position){
		yRandPosition = position;
	}
	void setPowerType(bool type){
		powerType = type;
	}

	//Methods
	void hidePowerUp(){
		xPosition = 9.0f;
		yPosition = 9.0f;
	}
};
