#include<iostream>
using namespace std;

class Flower
{
public:
	virtual void ShowElement() = 0;
};///ababstract
class GirlFlower : public Flower
{
public:
	void ShowElement()
	{
		cout << "Girl+flowers\n";
	}
};
class BoyFlower : public Flower
{
public:
	void ShowElement()
	{
		cout << "Boy+flower\n";
	}
};

class Stone
{
public:
	virtual void ShowStone() = 0;
};//abstract
class BoyStone : public Stone
{
public:
	void ShowStone() override
	{
		cout << "Boy+stown\n";
	}
};
class GirlStone : public Stone
{
public:
	void ShowStone() override
	{
		cout << "Girl+stown\n";
	}
};

class Player
{
public:
	virtual void Run() = 0;
}; ///abstract
class Mario: public Player
{
public:
	void Run() override
	{
		cout << "Im so fast.....!!!!!!!!!!!!!!!\n";
	}
};
class Princess : public Player
{
public:
	void Run() override
	{
		cout << "Im so buitiful.....!!!!!!!!!!!!!!!\n";
	}
};

class GameFabric
{
public:
	virtual Flower * CreateFlower() = 0;
	virtual Stone* CreateStone() = 0;
	virtual Player* CreatePlayer() = 0;
};
class GirlFabric : public GameFabric
{
public:
	Flower* CreateFlower()
	{
		return new GirlFlower();
	}
	Stone* CreateStone()
	{
		return new GirlStone();
	}
	Player* CreatePlayer()
	{
		return new Princess();
	}
};
class BoyFabric : public GameFabric
{
public:
	Flower* CreateFlower() override
	{
		return new BoyFlower();
	}
	Stone* CreateStone() override
	{
		return new BoyStone();
	}
	Player* CreatePlayer() override
	{
		return new Mario();
	}
};

void main()
{
	GameFabric* fabric = new GirlFabric();

	Flower* fl = fabric->CreateFlower();
	Stone* stone = fabric->CreateStone();
	Player* player = fabric->CreatePlayer();

	fl->ShowElement();
	stone->ShowStone();
	player->Run();


	delete fl;
	delete stone;
	delete player;
	delete fabric;
}