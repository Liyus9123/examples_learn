#include <iostream>
using namespace std;

void nPrintN(int N);

int main(int argc, char const *argv[])
{
    /* code */
    int N;
    cout << "请输入一个整数：" << endl;
    cin >> N ;
    nPrintN(N);
    return 0;
}

void nPrintN(int N)
{
    for (int i = 1; i <= N; i++)
    {
        /* code */
        cout << i << endl;
    }
}

