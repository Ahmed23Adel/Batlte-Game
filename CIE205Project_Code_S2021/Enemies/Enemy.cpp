#include "Enemy.h"


Enemy::Enemy(int id, ENMY_TYPE type, int arrTime, double health, int power,
	int reload, int speed,int distance)
{
	SetID(id);
	SetType(type);
	SetArrvTime(arrTime);
	SetHealth(health);
	SetPower(power);
	SetReload(reload);
	SetSpeed(speed);
	SetDistance(distance);
}

Enemy::~Enemy()
{
}



bool Enemy::operator>(Enemy* other)
{
	return this->priority > other->GetPriority();
}

bool Enemy::operator>=(Enemy* other)
{
	return this->priority >= other->GetPriority();
}

void Enemy::DecrementDist()
{
	if (Distance > MinDistance)
		Distance--;
}

