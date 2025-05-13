#include <iostream>
#include<string>
using namespace std;

int main()
{

    /*
    需求:实现在windows上支持ls命令的shell
        使用cin接收用户输入
        使用system调用dir命令模拟ls
        支持ls不传参数和传递参数
        用户输入exit和quit退出
    */
    {
        

    }


    return 0;


    //system 执行系统命令
    //system("cd");

    string cmd = "dir";
    //system(cmd.c_str());
    //接受用户输入命令，再用system执行
    cout << ">>";
    cin >> cmd;
    
    //缓存区还有内容
    cout << "in_avail" << cin.rdbuf()->in_avail() << endl;
    //缓存区有内容，不知有\n一个字符
    if (cin.rdbuf()->in_avail() > 1)
    {
        string tmp;
        cin >> tmp;
        cmd += " " + tmp;
    }
    cout << "cmd:" << cmd << endl;

    //return 0;
    system("pause");




    int index{ 0 };
    //无限循环
    while (1)
    {
        index++;
        if (index % 2 == 0)
            continue;
        if (index > 10)
            break;
        cout << index << " ";
    }
    cout << endl;

    bool is_exit{ false };
    index = 0;
    while (!is_exit)
    {
        index++;
        if (index > 10)
            is_exit = true;
        cout << index << " ";
    }
    cout << endl;

    index = 0;
    while (index++ < 10)
    {
        cout << index << " ";
    }
    cout << endl;

    index = 0;
    while (++index < 10)
    {
        cout << index << " ";
    }
    cout << endl;

    index = 0;
    while (int i = ++index)
    {
        cout << index << " ";
        if (i > 10)
            break;
    }
    cout << endl;
}
