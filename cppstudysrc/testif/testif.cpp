// testif.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<bitset>
using namespace std;

int main()
{
	//算数运算符
	//逐位非 ~	
	// ~0=1  ~1=0
	// ~101=010
	//逐位与 &  
	// 1&1=1 0&1=0 1&0=0 0&0=0  
	//逐位或 |
	// 1|1=1 0|1=1 1|0=1 0|0=0

	/*
	char a = 0b10000001; //0b C++14支持
	char b = 0b00000001;
	//用bitset输出二进制
	//include<bitset>
	//逐位非
	cout << "a:\t" << bitset<8>(a) << endl;
	cout << "~a:\t" << bitset<8>(~a) << endl;
	cout << "b:\t" << bitset<8>(b) << endl;
	cout << "~b:\t" << bitset<8>(~b) << endl;
	//逐位与
	cout << "a&b:\t" << bitset<8>(a&b) << endl;
	//逐位或
	cout << "a|b:\t" << bitset<8>(a|b) << endl;
	*/
	
	bool f1{ false };
	bool f2{ false };
	bool t1{ true };
	bool t2{ true };
	if (t1)
	{
		cout << "t1 is true" << endl;
		cout << "f1=" << f1 << endl;
		cout << "t1=" << t1 << endl;

		cout << "f1|t1=" << (f1 | t1) << endl;
		if (f1 | t1) cout << "(f1|t1)true\n";
		cout << "f1|f2=" << (f1 | f2) << endl;

		cout << "f1&t2=" << (f1 & t2) << endl;
		cout << "t1&t2=" << (t1 & t2) << endl;

	}
	
	//逻辑运算符（代用运算符）
	//逻辑非 !	not
	//逻辑或 ||	or
	//逻辑与 &&	and
	
	if(f1 or t1)
	{
		cout << "f1 or t1" << endl;
	}
	if (f1 and t1)
	{
		cout << "f1 and t1" << endl;
	}
	else
	{
		cout << "f1 and t1 else" << endl;
	}
	if (not f1)
	{
		cout << "not f1" << endl;
	}
	if (not(f1 and t1))
	{
		cout << "not (f1 and t1)" << endl;
	}

	//and（&&）、or（||） 和 & 、|的区别(逻辑和算数的区别)
	//逻辑运算符是短路求值的
	//如果通过第一个操作数就能得到结果，不求值第二个
	//验证短路求值
	int x1{ 0 };
	x1 = 10;
	if ((x1++) or (x1 += 2))
	{
		cout << "(x1++) or (x1 += 2)" << endl;
	}
	cout << "x1=" << x1 << endl;
	
	x1 = 10;
	if ((x1++) | (x1 += 2))
	{
		cout << "(x1++) or (x1 += 2)" << endl;
	}
	cout << "x1=" << x1 << endl;





	//标准输出cout
	cout << "请输入一个整数";
	//标准输入cin控制台接受的输入内容
	int x{ 0 };
	cin >> x;//用户输入的值存入了x
	cout << "x=" << x << endl;

	//比较表达式 > < == != <= >=
	//if条件满足后，其他条件都不会进入
	//嵌套尽量不超过3层
	if (x > 100)
	{
		cout << "x>100" << endl;
		if (x == 101)
			//代码如果只有一行可以省略{}
			cout << "x = 101" << endl;
		if (x != 102) cout << "x!=102" << endl;
		//容易出现的bug,if多了一个分号
		if (x == 103);
		{
			cout << "[103]";
		}
		//容易出现的错误，==写成=
		//转换为bool，非零就是true
		//if (x = 104)
		//	cout << "[104]" << endl;
		//避免错误的写法，字面量写到左面，善用编译器
		if (105 == x)
			cout << "[105]" << endl;
	}
	else if (x > 200)//不会进入
	{
		cout << "x > 200" << endl;
	}
	else if (x < 50)
	{
		cout << "x < 50" << endl;
	}
	else//前面条件都不满足，直接进入改代码块
	{
		cout << "else x = " << x << endl;
	}
}
