#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string str1{"test string 1"};
    cout << "str1:" << str1 << endl;
    str1 = "test string 1-2";
    string str2{ str1 };
    cout << "str2:" << str2 << endl;
    string str3;//默认空串
    str3 = str2;
    cout << "str3" << str3 << endl;

    string str4{ "123456789" };
    cout << "str4.size():" << str4.size() << endl;
    cout << "str4.capacity()=" << str4.capacity() << endl;

    //截断字符串
    cout << str4.substr(3) << endl;//从下标3开始截取
    cout << str4.substr(1, 3) << endl;//substr(数组下标,选取长度)

    string strif;
    //空串判断
    if (strif.empty())
    {
        cout << "strif empty" << endl;
    }
    if (strif.size() == 0)
    {
        cout << "strif.size()==0" << endl;
    }
    if (strif == "")
    {
        cout << "strif == " << endl;
    }
    strif = "test";
    if ("test" == strif)
    {
        cout << "strif == test" << endl;
    }
    if ("test1" != strif)
    {
        cout << "strif != test1" << endl;
    }

    
    //字符串转换为数字， 出错抛异常
    auto i1 = stoi("1234");
    i1++;
    cout << "i1=" << i1 << endl;
    string sd1 = "123.5";
    double d1 = stod(sd1);
    cout << "d1=" << d1 << endl;
    auto f1 = stof("33.1f");
    cout << f1 << endl;
    auto f2 = stof("33.1");
    cout << f2 << endl;
    cout << stoll("-1231654654564654654") << endl;

    //数字转换为字符串， 出错抛异常
    auto pistr = to_string(3.1415926);
    cout << "pistr = " << pistr << endl;
    cout << to_string(-19998) << endl;

    //字符串的拼接
    string log;
    string txt = "login success!";
    string user = "xcj";
    int thread_id = 1023;
    log = user + ":" + txt + ":" + to_string(thread_id);
    log = "[debug]" + log;
    log += ";";
    cout << log << endl;

    //查找和替换
    string strfind = "test for find [user] test";
    auto pos = strfind.find("[test]");
    string suser = "xcj";
    if (pos == string::npos)
    {
        cout << "[test] not find" << endl;
    }
    string key = "[user]";
    pos = strfind.find(key);
    cout << "pos=" << pos << endl;
    if (pos != string::npos)
    {
        cout << strfind.substr(pos) << endl;
        auto bak = strfind;
        auto re = strfind.replace(
            pos,//被替换字符的起始位置
            key.size(),//要被替换掉的内容长度
            suser//替换后的字符串
            );
        cout << strfind << endl;//原字符串也会被替换
        cout << bak << endl;
        cout << re << endl;

    }
}
