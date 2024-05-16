#include <iostream>
using namespace std;
#define MAXN 10

int Sum(int List[],int N);

int main(int argc, char const *argv[])
{
    /* code */
    int List[MAXN],N,i;
    // int List[] = {};
    // int N,i;
    cout << "请输入整数个数：";
    cin >> N;
    cout << "请输入" << N << "个整数：" << endl;
    for (i = 0; i < N; i++)
    {
        cin >> List[i];
    }
    Sum(List,N);
    
    return 0;
}

int Sum(int List[],int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        /* code */
        sum += List[i];
    }
    cout << "这些整数的和为：" <<sum << endl;
    return sum;
    
}
