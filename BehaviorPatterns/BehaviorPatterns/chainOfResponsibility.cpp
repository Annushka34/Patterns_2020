////вжив для послаблення звязності коду
//
//#include<iostream>
//#include<string>
//#include<list>
//
//using namespace std;
//
//class Accsessor
//{
//protected:
//	string _meal;
//	Accsessor* _accsessor = nullptr;
//public:
//	virtual void SetAccsessor(Accsessor*accs) = 0;
//	virtual void GiveMeal(string meal) = 0;
//};
//
//class MeatCooker :public Accsessor
//{
//public:
//	MeatCooker()
//	{
//		_meal = "meat";
//	}
//	void SetAccsessor(Accsessor*accs)
//	{
//		_accsessor = accs;
//	}
//	void GiveMeal(string meal)
//	{
//		cout << "i am meat cooker";
//		if (_meal == meal)
//		{
//			cout << "Take your " << meal;
//		}
//		else
//		{
//			cout << "i cant make " << meal << endl;
//			if(_accsessor!=nullptr)
//			_accsessor->GiveMeal(meal);
//			else
//			{
//				cout << "   Im last in the chain\n";
//			}
//		}
//	}
//};
//
//class BarCooker :public Accsessor
//{
//public:
//	BarCooker()
//	{
//		_meal = "coffe";
//	}
//	void SetAccsessor(Accsessor*accs)
//	{
//		_accsessor = accs;
//	}
//	void GiveMeal(string meal)
//	{
//		cout << "i am bar cooker";
//		if (_meal == meal)
//		{
//			cout << "Take your " << meal;
//		}
//		else
//		{
//			cout << "i cant make " << meal << endl;
//			if (_accsessor != nullptr)
//			_accsessor->GiveMeal(meal);
//			else
//			{
//				cout << "   Im last in the chain\n";
//			}
//		}
//	}
//};
//
//class CakeCooker :public Accsessor
//{
//public:
//	CakeCooker()
//	{
//		_meal = "cake";
//	}
//	void SetAccsessor(Accsessor*accs)
//	{
//		_accsessor = accs;
//	}
//	void GiveMeal(string meal)
//	{
//		cout << "i am cake cooker";
//		if (_meal == meal)
//		{
//			cout << "Take your " << meal;
//		}
//		else
//		{
//			cout << "i cant make " << meal << endl;
//			if (_accsessor != nullptr)
//			_accsessor->GiveMeal(meal);
//			else
//			{
//				cout << "   Im last in the chain\n";
//			}
//		}
//	}
//};
//
//void main()
//{
//	Accsessor*meat = new MeatCooker();
//	Accsessor*bar = new BarCooker();
//	Accsessor*cake = new CakeCooker();
//
//	meat->SetAccsessor(cake);
//	cake->SetAccsessor(bar);
//
//	meat->GiveMeal("cheese");
//	delete meat;
//	delete bar;
//	delete cake;
//}