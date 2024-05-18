#include <iostream>
using namespace std;

void jugement_oe(int N);

int main(int argc, char const *argv[])
{
    /* code */
    int n = 0;
    cout << "请输入一个整数：" << endl;
    cin >> n;
    jugement_oe(n);
    return 0;
}

void jugement_oe(int N)
{
    if (N % 2 == 0 || N == 0)
    {
        /* code */
        cout << N << " is Odd." << endl;
    }
    else
    {
        cout << N << " is Even." << endl;
    }
    
}