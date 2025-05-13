// homework-YUV-RGB.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    /*
    * 需求：YUV和RGB互相转换，变量输入多值，输出结果
        YUV=>RGB
        R = Y + 1.13983 * (V - 128)
        G = Y - 0.39465 * (U - 128) - 0.58060 * (V - 128)
        B = Y + 2.03211 * (U - 128)
        如果计算出来的 RGB 分量小于 0 , 则取 0 值 ;如果计算出来的 RGB 分量大于 255 , 则取 255;

        RGB=>YUV
        Y = 0.299 * R + 0.587 * G + 0.114 * B
        U = -0.14713 * R - 0.28886 * G + 0.436 * B + 128 
        V = 0.615 * R - 0.51498 * G - 0.10001 * B + 128
    */
    {
        //YUV=>RGB
        double y{ 0 };
        double u{ 0 };
        double v{ 0 };
        cout << "请输入yuv的值" << endl;
        cin >> y >> u >> v;
        auto r = y + 1.13983 * (v - 128);
        auto g = y - 0.39465 * (u - 128) - 0.58060 * (v - 128);
        auto b = y + 2.03211 * (u - 128);
        if (r < 0)
        {
            r = 0;
        }
        if (r > 255)
        {
            r = 255;
        }
        if (g < 0)
        {
            g = 0;
        }
        if (g > 255)
        {
            g = 255;
        }
        if (b < 0)
        {
            b = 0;
        }
        if (b > 255)
        {
            b = 255;
        }
        cout << "RGB的值为" << endl;
        cout << r << "," << g << "," << b << endl;
    }
    {
        //RGB=>YUV
        double r{ 0 };
        double g{ 0 };
        double b{ 0 };
        cout << "请输入RGB的值" << endl;
        cin >> r >> g >> b;
        auto y = 0.299 * r + 0.587 * g + 0.114 * b;
        auto u = -0.14713 * r - 0.28886 * g + 0.436 * b + 128;
        auto v = 0.615 * r - 0.51498 * g - 0.10001 * b + 128;
        cout << "YUV的值为" << endl;
        cout << y << "," << u << "," << v << endl;
    }
    
}
