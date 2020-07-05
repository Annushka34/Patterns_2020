#include<iostream>
#include<string>
using namespace std;


class Pizza
{
	string ingredients;
public:
	void AddIngredient(string text)
	{
		ingredients += (text +" ");
		//ingredients += "\n";
	}
	void EatPizza()
	{
		cout << ingredients << endl;
	}
};


class Cooker//---ABSTRACT BUILDER
{		
public:
	Cooker()
	{
		pizza = new Pizza();
	}
	Pizza* pizza;
	virtual void AddSouse() = 0;
	virtual void AddSousige() = 0;
	virtual void AddCheese() = 0;
	virtual void AddDough() = 0;
	Pizza * GetPizza()
	{
		return pizza;
	}	
};

class CoolCooker: public Cooker//---CONCRETE BUILDER  1
{
public:
	//CoolCooker(): Cooker()
	//{	 }
	void AddSouse()
	{
		pizza->AddIngredient("a lot of souse");
	}
	void AddSousige()
	{
		pizza->AddIngredient("basturma");
	}
	void AddCheese()
	{
		pizza->AddIngredient("blue cheese");
	}
	void AddDough()
	{
		pizza->AddIngredient("slim dough");
	}
};

class PoorCooker : public Cooker//---CONCRETE BUILDER  2
{
	void AddSouse() override
	{
		pizza->AddIngredient(" ");
	}
	void AddSousige() override
	{
		pizza->AddIngredient("cheep sousige");
	}
	void AddCheese() override
	{
		pizza->AddIngredient("cheder");
	}
	void AddDough() override
	{
		pizza->AddIngredient("thin dough");
	}
};


class Pizzerija//---DIRECTOR
{
public:
	void CreateBigPizza(Cooker* cooker)
	{		
		cooker->AddDough();
		cooker->AddSouse();
		cooker->AddCheese();
		cooker->AddSousige();
	}
	void CreateSmallPizza(Cooker* cooker)
	{
		cooker->AddDough();
		cooker->AddCheese();
	}
};

void main()
{
	Pizzerija pizzerija;
	Cooker* cooker1 = new PoorCooker();
	Cooker* cooker2 = new CoolCooker();

	pizzerija.CreateSmallPizza(cooker2);

	Pizza* pizza = cooker2->GetPizza();
	pizza->EatPizza();

	delete pizza;
	delete cooker1;
	delete cooker2;
}