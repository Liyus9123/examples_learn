#include <iostream>
using namespace std;
// 逆序的三位数
int main(int argc, char const *argv[])
{
    int x = 0;
    int y = 0;
    int z = 0;
    cout << "请输入一个三位数：" << endl;
    cin >> x ;
    while (x > 0)
    {
        /* code */
        y = x % 10;
        z = z*10 + y;
        x /= 10;
    }
    cout << z << endl;
    
    return 0;
}
