#include <iostream>
using namespace std;
// 给你一个非负整数 x ，计算并返回 x 的 算术平方根 。
// 由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。
// 注意：不允许使用任何内置指数函数和算符，例如 pow(x, 0.5) 或者 x ** 0.5 。
int sqrtself(int x);
/*
    思路：二分枚举
    从该数值的二分之一开始向下枚举直到x*x的值小于等于该数
    返回整数x
*/
int main(int argc, char const *argv[])
{
    /* code */
    int num = 0;
    cout << "请输入一个整数：" << endl;
    cin >> num;
    sqrtself(num);
    return 0;
}
int sqrtself(int x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x == 1)
    {
        return 1;
    }
    int res = 1;
    int sum = x;
    while (1 < x)
    {
        int mid = sum/2;
        if (mid * mid > x)
        {
            /* code */
            sum -= 1;
        }
        else
        {
            res = mid;
            cout << x << "的平方根是" << res << endl;
            return res;
        }
        
    }
    
    
}
