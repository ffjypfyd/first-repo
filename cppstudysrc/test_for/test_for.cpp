#include <iostream>
using namespace std;

int main(int argc,char *argv[],char *env[])
{
    for (int i = 0;i < 10;i++)
    {
        cout << "i=" << i << endl;
    }

    for (int i = 0;i < 100;i++)
    {
        if (i % 2 == 0)
            continue;
        cout << i << endl;
        if (i > 50)
            break;
    }

    //嵌套for，尽量不超过三层
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 3;j++)
        {
            cout << i << "-" << j << " ";
        }
        cout << endl;
    }

    //无限循环
    int index = 0;
    for (;;)
    {
        if (index > 10)
            break;
        cout << "index:" << index << endl;
        index++;
    }

    for (int i = 0;env[i] != nullptr;i++)
    {
        cout << env[i] << endl;
    }
}
