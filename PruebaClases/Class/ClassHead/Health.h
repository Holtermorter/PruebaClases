#pragma once
#include <iostream>
class Health{
private:
	

public:
	
	int healthValue = 0;
	int entityHealthSave = 300;
	bool healthEstatus = true;
	
	void heal(int);
	void hit(int);
	void healthIncrease(int);
	void check();
	int counter();
	
};

