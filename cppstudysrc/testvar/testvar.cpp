// testvar.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//全局变量
//作用域，再不做声明的情况下
//在本文都可以访问
//生命周期在进入main函数前申请空间
//在main函数执行结束后释放空间
int gx{ 0 };

int main()
{
    //类型 变量名{初始化值}
    //整数类型字面量
    cout << 123 << -123 << endl;
    cout << 123LL << endl;
    cout << "sizeof(123L)=" << sizeof(123LL) <<endl;

    //浮点类型的字面量
    float f1{ 1.3f };
    f1 = 1.f;
    f1 = 2.0f;
    f1 = 3.3;//将double类型的字面量赋值给float，会损失精度
    double d1{ 1.4 };

    //运算符支持字面量
    int x{ 1 + 2 };
    cout << "x=" << x << endl;

    //自增自减
    x += 10;//x=x+10
    x -= 5;
    x *= 4;
    x /= 2;
    x++;//先取值再++
    x--;
    ++x;//先++再取值，要用到++就用这个先++，如果涉及到先++还是后++，有风险，建议重构代码
    --x;

    int u{ 0 };
    u = 10 / 2;
    cout << "u=" << u << endl;
    int t{ 0 };
    //u = 10 / t;//一些编译会直接报错

    u = 1.1;//浮点数转整数，小数位会被直接扔掉
    cout << "u=" << u << endl;
    
    //整数相除会丢弃小数位
    //想要保留，需要保证其中一个数是浮点数
    int x1{ 1 };
    int x2{ 2 };
    float f2{ 0 };
    f2 = x1 / x2;
    cout << "1/2=" << f2 << endl;//是0，不是0.5
    double x3{ 2. };
    float f3{ 0 };
    f3 = x1 / x3;
    cout << "1/2.=" << f3 << endl;//0.5

    float f4{ 0 };
    f4 = (float)(x1 / x2);//无效
    cout << "f4=" << f4 << endl;
    f4 = x1 / (float)x2;//转换
    cout << "f4=" << f4 << endl;

    //访问全局变量
    cout << "gx=" << gx << endl;
    //局部变量
    //作用域在变量定义所属的{}内部
    //从变量定义开始到}结束

    int px{ 0 };
    //int x{ 20 };
    {
        //一段代码块，一个作用域
        //可以访问父作用域变量
        int py{ 0 };
        cout << "py=" << py << endl;
        cout << "px=" << px << endl;
        //一个变量在一个作用域只能定义一次，但如果划分了子作用域，又可以定义一次
        int x{ 20 };
        cout << "x=" << x << endl;
    }

    //运行时常量
    const int cx{ 100 };
    //cx = 200;//修改会报错
    cout << "cx=" << cx << endl;

    //cx2在运行时才确定的常量
    int t1 = 10;
    const int cx2{ t1 + 10 };
    cout << "cx2=" << cx2 << endl;

    //编译时常量
    constexpr int cex{ 300 };
    cout << "cex=" << cex << endl;

    //无法用变量初始化编译时常量
    //constexpr int cex2{ t1 * 10 };
    //大部分情况用编译时常量，设计参数传递只能用运行时常量

    {
        auto a1 = 10;
        auto d1 = 9.;
        auto f1 = 8.f;
        auto acex = cex;//auto推导常量是会变成普通变量
        constexpr auto c1 = cex;//如果要常量
        const auto c2 = a1;
        auto a3{ 11.3 };
        auto a4 = 14LL;
        auto a5 = (int)d1;

    }
}