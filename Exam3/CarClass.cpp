#include <iostream>
#include <string>
using namespace std;

class Car //class Car
{
private:
	int year;
	string make;
	int speed;

public:
	Car(int year, string make); 
	string getMake();
	int getYear();
	int getSpeed();
	void accelerate();
	void brake();

};


Car::Car(int y, string model)
{
	year = y;
	make = model;
	speed = 0;
}

int Car::getYear()
{
	return year;
}

string Car::getMake()
{
	return make;
}

int Car::getSpeed()
{
	return speed;
}

void Car::accelerate()
{
	speed += 5;
}

void Car::brake()
{
	speed -= 5;
}

int main()
{

}