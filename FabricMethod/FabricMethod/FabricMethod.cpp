#include"Logger.h"

void main()
{
	ILogger* logger = Fabric::CreateLogger(LogLevel::User);
	logger->SaveLog();
	logger->Show();
}