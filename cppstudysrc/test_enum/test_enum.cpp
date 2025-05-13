#include <iostream>
using namespace std;

enum 枚举类型名
{
	枚举值1,//默认0
	枚举值2,
	枚举值3 = 100,
	枚举值4,
	枚举值5
};
enum Status
{
	PLAY,
	PAUSE,
	STOP
};
//C++11 枚举
enum class LogLevel
{
	DEBUG,
	INFO,
	ERROR,
	FATAL
};

int main()
{
	//设置日志显示的最低级别
	LogLevel level{ LogLevel::DEBUG };
	//int s = level;无法转换为int
	//不能直接打印，需要强制转换
	int s = static_cast<int>(level);
	cout << s << endl;
	LogLevel log_level = LogLevel::INFO;
	if (level <= log_level)
	{
		cout << "记录日志" << endl;
	}


	枚举类型名 ev1{ 枚举值5 };
	cout << "枚举值1=" << 枚举值1 << endl;
	cout << "枚举值4=" << 枚举值4 << endl;
	Status status{ STOP };
	if (status == 2)
	{
		cout << "2 STOP" << STOP << endl;
	}
	status = PLAY;
	if (status == PLAY)
	{
		cout << "PLAY" << endl;
	}

}
