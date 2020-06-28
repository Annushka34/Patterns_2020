#pragma once
#include<string>
#include<iostream>
using namespace std;

class ILogger
{
protected:
	string logText;
public:
	virtual void SaveLog() = 0;
	void Show()
	{
		cout << logText << endl;
	}
};


class UserLog: public ILogger
{
	void SaveLog() override
	{
		logText = "base Error";
	}

};


class SystemLog : public ILogger
{
	void SaveLog() override
	{
		logText = "time: 28.06.2020 13:07 Error was in ....   user: Ann";
	}
};

enum class LogLevel
{
	User,
	System
};

static class Fabric
{
public:
	static ILogger* CreateLogger(LogLevel logLevel )
	{
		if (logLevel == LogLevel::User)
			return new UserLog();
		if (logLevel == LogLevel::System)
			return new SystemLog();
	}
};
