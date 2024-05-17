#include <iostream>
using namespace std;

// 其中N是用户传入的参数，其值不超过12。如果N是非负整数，则该函数必须返回N的阶乘，否则返回0。

int Factorial( const int N );

int main(int argc, char const *argv[])
{
    /* code */
    int n = 0;
    cout << "请输入一个整数：" << endl;
    cin >> n;
    Factorial(n);
    return 0;
}

int Factorial( const int N )
{
    int sum = N;
    for (int i = N-1; i > 0; i--)
    {
        /* code */
        sum = sum * i;
    }
    cout << N << "! = " << sum << endl;
    // cout << sum <<endl;
    return sum;
}