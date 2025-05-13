#include <iostream>
using namespace std;

/*
	需求说明：用户控制显示日志的最高级别
	日志级别：DEBUG INFO ERROR FATAL
	输出四条日志：
		DEBUG:test debug log
		INFO:test info log
		ERROR:test error log
		FATAL:test fatal log
*/
enum class LogLevel
{
	DEBUG,
	INFO,
	ERROR,
	FATAL
};

int main(int argc,char *argv[])
{
	//用户传递日志的最低显示级别
	//debug < info < error < fatal
	//test_log info
	auto logLevel = LogLevel::DEBUG;
	if (argc > 1)
	{
		string levelstr = argv[1];
		if ("info" == levelstr)
			logLevel = LogLevel::INFO;
		else if ("error" == levelstr)
			logLevel = LogLevel::ERROR;
		else if ("fatal" == levelstr)
			logLevel = LogLevel::FATAL;
	}
	//测试日志1 debug
	{
		auto level = LogLevel::DEBUG;
		string context = "test log 1";
		if (level >= logLevel)
		{
			string levelstr = "debug";
			switch (level)
			{
			case LogLevel::INFO:
				levelstr = "info";break;
			case LogLevel::ERROR:
				levelstr = "error";break;
			case LogLevel::FATAL:
				levelstr = "fatal";break;
			}
			cout << levelstr << ":" << context << endl;
		}
	}

	//测试日志2 info
	{
		auto level = LogLevel::INFO;
		string context = "test log 2";
		if (level >= logLevel)
		{
			string levelstr = "debug";
			switch (level)
			{
			case LogLevel::INFO:
				levelstr = "info";break;
			case LogLevel::ERROR:
				levelstr = "error";break;
			case LogLevel::FATAL:
				levelstr = "fatal";break;
			}
			cout << levelstr << ":" << context << endl;
		}
	}

	//测试日志3 error
	{
		auto level = LogLevel::ERROR;
		string context = "test log 3";
		if (level >= logLevel)
		{
			string levelstr = "debug";
			switch (level)
			{
			case LogLevel::INFO:
				levelstr = "info";break;
			case LogLevel::ERROR:
				levelstr = "error";break;
			case LogLevel::FATAL:
				levelstr = "fatal";break;
			}
			cout << levelstr << ":" << context << endl;
		}
	}

	//测试日志4 fatal
	{
		auto level = LogLevel::FATAL;
		string context = "test log 4";
		if (level >= logLevel)
		{
			string levelstr = "debug";
			switch (level)
			{
			case LogLevel::INFO:
				levelstr = "info";break;
			case LogLevel::ERROR:
				levelstr = "error";break;
			case LogLevel::FATAL:
				levelstr = "fatal";break;
			}
			cout << levelstr << ":" << context << endl;
		}
	}
}
