#include <iostream>
using namespace std;

#define MiX 10

typedef float ElementType;

ElementType Max( ElementType S[], int N );

int main(int argc, char const *argv[])
{
    /* code */
    ElementType S[MiX];
    int N, i;
    cout << "请输入元素个数：" << endl;
    cin >> N;
    cout << "请输入" << N << "个元素：" << endl;
    for ( i=0; i<N; i++ )
        cin >> S[i] ;
    cout << "元素中的最大值为：" << Max(S,N) << endl;;
    return 0;
}

ElementType Max( ElementType S[], int N )
{
    ElementType max = S[0];
    for (int i = 0; i < N; i++)
    {
        /* code */
        if (max < S[i])
        {
            /* code */
            max = S[i];
        }
    }
    // cout << max << endl;
    return max;
}

