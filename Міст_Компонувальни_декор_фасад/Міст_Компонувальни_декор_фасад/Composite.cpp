//#include<iostream>
//#include<string>
//#include<ctime>
//#include<list>
//
//
//using namespace std;
//
//
//class Component//  Manager or Employee
//{
//public:
//	string name;
//	int value;
//	virtual int GetData() = 0;
//	virtual void AddComponent(Component* component) = 0;
//};
//
//class Composite: public Component// Manager
//{
//	list<Component*> list;
//public:
//	Composite(string n)
//	{
//		name = n;
//	}
//	int GetData()
//	{
//		cout << "BREANCH : " << name << endl;
//		int sum = 0;
//		for (auto el : list)
//		{
//			sum+=el->GetData();			
//		}
//		return sum;
//	}
//	void AddComponent(Component* component)
//	{
//		list.push_back(component);
//	}
//};
//
//class Leaf : public Component//Employee
//{
//public:
//	Leaf()
//	{
//		value = rand() % 100;
//	}
//	int GetData()
//	{
//		cout <<"leaf: "<< value << endl;
//		return value;
//	}
//	void AddComponent(Component* component)
//	{
//		throw;
//	}
//};
//
//
//void main()
//{
//	srand(time(0));
//
//	Component* root = new Composite("root");
//	Component* breanch1 = new Composite("breanch1");
//	Component* breanch2 = new Composite("breanch2");
//	Component* breanch3 = new Composite("breanch3");
//	Component* leaf1 = new Leaf();
//	Component* leaf2 = new Leaf();
//	Component* leaf3 = new Leaf();
//	Component* leaf4 = new Leaf();
//	Component* leaf5 = new Leaf();
//	root->AddComponent(breanch1);
//	root->AddComponent(breanch2);
//
//	breanch1->AddComponent(breanch3);
//
//	breanch3->AddComponent(leaf1);
//	breanch3->AddComponent(leaf2);
//	breanch3->AddComponent(leaf3);
//
//	breanch2->AddComponent(leaf4);
//	breanch2->AddComponent(leaf5);
//
//	int total = root->GetData();
//
//	cout << "TOTAL POWER: " << total << endl;
//	Component* leaf6 = new Leaf();
//	//leaf1->AddComponent(leaf6);
//}