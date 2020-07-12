//#include<iostream>
//#include<string>
//
//
//using namespace std;
//
//class Instrument
//{
//public:
//	virtual void Draw() = 0;
//};
//
//class Point : public Instrument
//{
//public:
//	void Draw() override
//	{
//		cout << ".";
//	}
//};
//
//class Line : public Instrument
//{
//public:
//	void Draw() override
//	{
//		cout << "-";
//	}
//};
//
//class Paper : public Instrument
//{
//public:
//	void Draw() override
//	{
//		cout << char(219)<< char(219);
//	}
//};
//
//class Figure
//{
//protected:
//	string _name;
//public:
//	Instrument* _instrument;
//	Figure(string name)
//	{
//		_name = name;
//		_instrument = nullptr;
//	}
//
//	void SetInstrument(Instrument* instrument)
//	{
//		if (_instrument != nullptr) delete _instrument;
//		_instrument = instrument;
//	}
//
//	virtual void DrawFigureOnePart() = 0;
//	virtual void DrawFigureTwoPart() = 0;
//
//	~Figure()
//	{
//		if (_instrument != nullptr) delete _instrument;
//	}
//};
//
//class Triangle : public Figure
//{
//public:
//	Triangle(string name): Figure(name)
//	{
//	}
//	void DrawFigureOnePart() override 
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j <=i; j++)
//			{
//				_instrument->Draw();
//			}
//			cout << endl;
//		}
//	}
//	void DrawFigureTwoPart() override
//	{
//		for (int i = 10; i >= 0; i--)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				_instrument->Draw();
//			}
//			cout << endl;
//		}
//	}
//};
//
//
//
//
//void main()
//{
//	Point* point = new Point();
//	Figure* f = new Triangle("equel cornel");
//	f->SetInstrument(new Point());
//	f->DrawFigureOnePart();
//
//	f->SetInstrument(new Paper());
//	f->DrawFigureTwoPart();
//
//	delete f;
//}