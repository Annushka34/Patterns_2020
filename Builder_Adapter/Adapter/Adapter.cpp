#include<iostream>
#include<string>
using namespace std;

class ICalculator
{
public:
	virtual void Sum() = 0;
	virtual void Min() = 0;
};

class MyCoolWindow
{
	ICalculator* _calc;
public:
	MyCoolWindow(ICalculator* calc)
	{
		_calc = calc;
	}
	void ShowNumbers()
	{
		cout << "Im working now...";
		_calc->Sum();
		_calc->Min();
	}
};

class CalcFromFriend : public ICalculator
{
public:
	void Sum()
	{
		cout << "convert from fraction and sum\n";
	}
	void Min()
	{
		cout << "convert from fraction and min\n";
	}
};

class CalcBorrowedFromNetAndNotPaied
{
public:
	void SumNumbers()
	{
		cout << "sum\n cool!!!\n";
	}
	void MinNumbers()
	{
		cout << "min\n cool!!!\n";
	}
	void ConverFromFraction()
	{
		cout << "ConvertFrom Fraction\n";
	}
};

class Adapter : public ICalculator
{
	CalcBorrowedFromNetAndNotPaied* calc;
public:
	Adapter()
	{
		calc = new CalcBorrowedFromNetAndNotPaied();
	}
	void Sum()
	{
		calc->ConverFromFraction();
		calc->SumNumbers();
	}
	void Min()
	{
		calc->ConverFromFraction();
		calc->MinNumbers();
	}
	~Adapter()
	{
		delete calc;
	}
};


void main()
{
	//ICalculator* calc = new CalcFromFriend();
	ICalculator* calc = new Adapter();
	MyCoolWindow window(calc);
	window.ShowNumbers();
}