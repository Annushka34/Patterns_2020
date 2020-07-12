#include<iostream>
#include<string>
#include<ctime>
#include<list>
#include<conio.h>
#include<Windows.h>


using namespace std;


class Car
{
	int _speed;
	string _carName;
public:
	Car(){}
	Car(string carName)
	{
		_speed = 0;
		_carName = carName;
	}
	virtual void Run(int increaseLev)
	{
		cout << _carName << "   start runned\n";
		while (!_kbhit())
		{
			_speed+= increaseLev;
			Sleep(50);
			cout << _speed << endl;
		}
		_getch(); _getch();
	}
};

class Mersedes : public Car
{
public:
	Mersedes():Car("Mersedes")
	{

	}
};

class Decorator : public Car
{
	Car* _car;
public:
	Decorator(Car * car)
	{
		_car = car;
	}
	virtual void Run(int increaseLev)
	{
		_car->Run(increaseLev);
	}
};

class AmbulanseCar : public Decorator
{
public:
	AmbulanseCar(Car* car) : Decorator(car)
	{

	}

	virtual void Run(int increaseLev)
	{
		cout << "It s red car with additional medical equipment\n";
		Decorator::Run(increaseLev);
	}
};

class SuperSpeedCar : public Decorator
{
public:
	SuperSpeedCar(Car* car) : Decorator(car)
	{

	}

	virtual void Run(int increaseLev)
	{
		cout << "My speed increase very fast\n";
		increaseLev += 2;
		Decorator::Run(increaseLev);
	}
};


void main()
{
	Car* car = new Mersedes();
	car->Run(1);
	
	car->Run(1);

	Decorator* decor1 = new AmbulanseCar(car);
	decor1->Run(1);

	Decorator* speedCar = new SuperSpeedCar(decor1);
	speedCar->Run(1);
}