#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* 
        * * * *
        * * * *
        * * * *
        * * * *
    */
//    cout << "* * * *" << endl;
//    cout << "* * * *" << endl;
//    cout << "* * * *" << endl;
//    cout << "* * * *" << endl;

// for (int i = 0; i < 4; i++)
// {
//     cout << "* * * *" << endl;
// }

// for (int i = 0; i < 4; i++)
// {
//     cout << "* " << endl;
//     cout << "* " << endl;
//     cout << "* " << endl;
//     cout << "* " << endl;
// }

// for (int i = 0; i < 4; i++)
// {
//     for (int j = 0; j < 4; j++)
//     {
//         cout << "* " ;
//     }
//     cout << endl;
    
// }

// for (int i = 0; i < 4; i++)
// {
//     for (int j = 0; j <= 4; j++)
//     {
//         if (j <= i)
//         {
//             cout << "* " ;
//         }
//         else
//         {
//             cout << " " ;
//         }
//     }
//     cout << endl;
// }

// for (int i = 0; i < 9; i++)
// {
//     for (int j = 0; j <= i; j++)
//     {
//         cout << "* " ;
//     }
//     cout << endl;
// }

//九九乘法表
// for (int i = 1; i < 10; i++)
// {
//     for (int j = 1; j <= i; j++)
//     {
//         cout << i << "*" << j << "=" << i*j << "\t" ;
//     }
//     cout << endl;
// }


// 百文百鸡
// 集市上卖鸡，公鸡3文1只，母鸡2文1只，小鸡1文3只
// 用100文买100只鸡，能有多少种买法，分别买多少只？公鸡g只 ， 母鸡m只， 小鸡100-g-m
// g的取值：0~33 . m的取值：0~50 . x的取值：100-g-m
int num = 0 ;//计数器
for (int g = 0 ; g < 34 ; g++)
{
    for (int m = 0; m < 51; m++)
    {
        int x = 100-g-m ;
        if (3*g + 2*m + (100-g-m)/3 == 100 && (100-g-m)%3 == 0)
        {
            cout << "公鸡" << g << "只;  " << "母鸡" << m << "只;  " << "小鸡" << x << "只;  " << endl;
            cout << "----------------------------------"<< endl;
            num++;
        }
        
    }
}
cout << "共有" << num << "种买法。" << endl;


// 鸡兔同笼
// 有一农户将鸡和兔装到一起
// 农户数清了，头与腿的数量
// 头：20 . 腿：60   请算出鸡和兔有多少只
/* 
    头有h个，腿有x个
    假设鸡有j只，兔有t只
    j+t=h
    2*j + 4*t = x
    2* （h-t） + 4*t = x       -->    t = （x-2h）/2    j = h - t
*/

    return 0;
}
