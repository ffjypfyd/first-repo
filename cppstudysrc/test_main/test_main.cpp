#include <iostream>
using namespace std;

int main(int argc,char *argv[],char *env[])
{
    //test_main传递参数 DEBUG 16 3.14
    cout << "argc=" << argc << endl;
    cout << "argv[0]=" << argv[0] << endl;
    if (argc > 1)
    {
        cout << "argv[1]=" << argv[1] << endl;
    }
    if (argc > 2)
    {
        cout << "argv[2]=" << argv[2] << endl;
    }
    if (argc > 3)
    {
        cout << "argv[3]=" << argv[3] << endl;
    }
    cout << env[0] << endl;
}