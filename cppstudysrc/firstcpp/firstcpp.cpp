// firstcpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    //std::cout << "Hello World!\n";

    //定义一个int类型的变量x
    //如果不给初始化值，那这个值不确定
    int x{100};

    cout << "x变量的值为" << x << endl;
    cout << "x变量的地址为" << &x << endl;
    //强制转换
    cout << "x变量的地址为" << (long long) & x << endl;
    //sizeof()获取变量占用内存大小
    cout << "int x内存大小为" << sizeof(x) << endl;

    long long bigint{ 0 };
    cout <<"long long bigint内存大小" << sizeof(bigint) << endl;


     
}