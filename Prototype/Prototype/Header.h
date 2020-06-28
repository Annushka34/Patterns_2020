#pragma once
#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;
class Media;

template<typename T>
class Clonable
{
	virtual T Clone() = 0;
};


class Media: public Clonable<Media*>
{
	string soundName;
	short * sound;
public:
	Media()
	{
		sound = new short[10000];
	}
	void PlaySound()
	{
		Beep(1568, 200);
		Beep(1568, 200);
		Beep(1568, 200);
		Beep(1245, 1000);
		Beep(1397, 200);
		Beep(1397, 200);
		Beep(1397, 200);
		Beep(1175, 1000);
	}

	Media* Clone()
	{
		Media* newMedia = new Media();
		newMedia->sound = this->sound;
		newMedia->soundName = this->soundName;
		return newMedia;
	}
};
