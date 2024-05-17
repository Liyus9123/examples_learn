#include <iostream>
using namespace std;

int Count_Digit ( const int N, const int D );

int main(int argc, char const *argv[])
{
    /* code */
    int N, D;
    cout << "请输入测试数和归纳的个位数：" << endl;
    cin >> N >> D;
    if (D < 0 || D >9)
    {
        /* code */
        cout << "输入有误！重新输入!" << endl;
        cin >> D;
    }
    
    Count_Digit(N, D);
    return 0;
}

int Count_Digit ( const int N, const int D )
{
    int m = 0;
    int count = 0;
    if (N < 0)
    {
        /* code */
        m = m - N;
    }
    else
    {
        m = N;
    }
    
    if (N == 0 && D == 0)
    {
        /* code */
        count = 1;
    }
    while (m)
    {
        /* code */
        if (m % 10 == D)
        {
            /* code */
            count++;
        }
        m = m / 10 ;
    }
    cout << D << "在" << N << "中出现了" << count << "次" << endl;
    return count;

}
