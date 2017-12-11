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
	int init;
	int year;
	string make;

	cout << "Enter car's year" << endl;
	cin >> year;

	cout << "Enter car's model" << endl;
	cin >> make;

	//Class Objects
	Car car(year, make);
	
	for (init = 0; init < 6; init++)
	{
		car.accelerate();
		cout << car.getMake() << "" << car.getYear() << "The car is accelerating at" << car.getSpeed() << endl;
	}
	cout << "The car's speed current speed is " << car.getSpeed() << " mph." << endl;

	for (init = 0; init<6; init++)
	{
		car.brake();
		cout << car.getMake() << "" << car.getYear() << "The car is accelerating at" << car.getSpeed() << endl;
	}
	cout << "The car's speed is now " << car.getSpeed() << " mph." << endl;

	system("pause");
	return 0;
}
