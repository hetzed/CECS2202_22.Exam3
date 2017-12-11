#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	int year;
	string make;
	int speed;

public:
	Car(int, string, int);
		string getMake();
		int getModel();
		int getSpeed();
		void accelerate();
		void brake();

};

