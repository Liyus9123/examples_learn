#include <iostream>
using namespace std;
double footInch_show(double cm);

// 错误测试
int main(int argc, char const *argv[])
{
    double inch = 0;//英寸
    double foot = 0;//英尺
    double cm = 0;
    cout << "请输入厘米数：" << endl;
    cin >> cm;
    footInch_show(cm);
    return 0;
}
double footInch_show(double cm)
{
    double M = cm / 100 ;
    double Foot = 0,Inch = 0;
    Foot = M / 0.3048;
    Inch = Foot / 12;
    cout << "英尺："  << Foot << "英寸：" << Inch << endl;
    return Foot,Inch;
}