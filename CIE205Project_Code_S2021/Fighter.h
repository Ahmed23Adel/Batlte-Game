#pragma once
#include "Enemies/Enemy.h"
class Fighter : public Enemy
{
public: 
	Fighter(int id, ENMY_TYPE type, int arrTime, double health, int power,
		int reload, int speed): Enemy(id,type,arrTime,health,power,reload,speed) {}
};

