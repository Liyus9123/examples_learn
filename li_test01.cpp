#include <iostream>
using namespace std;
// 给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
// 回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

void is_huiw(int x);

int main(int argc, char const *argv[])
{
    /* code */
    int num = 0;
    cout << "请输入一个整数：" << endl;
    cin >> num;
    is_huiw(num);
    return 0;
}
void is_huiw(int x)
{
    if (x < 0)
    {
        // return false;
        cout << "该数不是回文数！" << endl;
    }
    int res = 0;
    int sum = x;
    while (sum != 0)
    {
        res = res*10 + sum % 10 ;
        sum /= 10;
    }
    if (res == x)
    {
        cout << x << "是回文数！" << endl;
    }
    else
    {
        cout << "该数不是回文数！" << endl;
    }
    // return res == x;
}