#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int redball[6] = {};
    int blueball = 0;
    int result[7] = {};
    int selct[7] = {};
    bool da = false;
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        /* code */
        redball[i] = rand() % 31 + 1;
    }
    blueball = rand() % 16 + 1 ;
    for (int i = 0; i < 6; i++)
    {
        /* code */
        result[i] = redball[i] ;
        result[6] = blueball;
    }
    cout << "请选择您的号码：" << endl;
    for (int i = 0; i < 7; i++)
    {
        /* code */
        cin >> selct[i];
    }
    cout << "中奖号码是：" << endl;
    for (int i = 0; i < 7; i++)
    {
        /* code */
        if (selct[i] == result[i])
        {
            /* code */
            da = true;
        }
        cout << result[i] << " " ;
    }
    
    cout << endl;
    if (da == true)
    {
        /* code */
        cout << "恭喜您中奖了！" << endl;
    }
    else
    {
        cout << "很遗憾，您没有中奖！" << endl;
    }
    
    return 0;
}
