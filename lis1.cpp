#include <iostream>
#include <stdlib.h>
using namespace std;


void showCode(int selectC[],int len)
{
    for (int i = 0; i < len; i++)
    {
        /* code */
        cout << selectC[i] << "\t" ;
    }
    
}
bool isSave(int nums[] ,int x,int len)
{
    for (int i = 0; i < len; i++)
    {
        /* code */
        if (nums[i] == x)
        {
            /* code */
            return true;
        }
    }
    return false;
    
}

void getSelectC(int selectC[],int len)
{
    // red
    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout << "请输入第" << (i+1) << "个红色球号码" << endl;
        int num = 0;
        cin >> num;
        bool tag = isSave(selectC,num,len);
        if (tag)
        {
            /* code */
            cout << "该号码已存在！！" << endl;
            i--;
            continue;
        }
        else
        // 判断是否在取值区间
        if (1 <= num && num <= 31)
        {
        /* code */
            selectC[i] = num;
        }
        else
        {
            cout << "该号码错误在1-31" << endl;
            i--;
            continue;
        }
    }


    while (1)
    {
        int y = 0;
        cout << "请输入蓝色球号码：" << endl;
        cin >> y;
        if (1 <= y && y <= 16)
        {
            /* code */
            selectC[6] = y;
            break;
        }
        else
        {
            cout << "号码有误，重新输入!!" << endl;
        }
    }
    
    // int y = 0;
    // cout << "请输入蓝色球号码：" << endl;
    // cin >> y;
    // if (1 <= y && y <= 16)
    // {
    //     /* code */
    //     selectC[6] = y;
    // }
    // else
    // {

    // }
    
    
}

void getResultC(int resultC[],int len)
{
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        /* code */
        int x = rand() % 31 + 1;
        bool tag = isSave(resultC,x,len);
        if (tag)
        {
            /* code */
            i--;
            continue;
        }
        else
        {
            resultC[i] = x;
        }
        
    }
    
    int y = rand() % 16 + 1;
    resultC[6] = y;

}

int daAn(int selectC[],int resultC[],int len)
{
    int num = 0;
    for (int i = 0; i < len; i++)
    {
        /* code */
        for (int j = 0; i < len-1; i++)
        {
            /* code */
            if (resultC[i] == selectC[i])
            {
                /* code */
                num++ ;
            }
            
        }
        
    }
    if (resultC[6] == selectC[6])
    {
        /* code */
        num++;
    }
    return num;
    
}

int main(int argc, char const *argv[])
{
    int selectC[7] = {0} ;
    int resultC[7] = {0} ;
    
    getSelectC(selectC,7);
    cout << "您本次购买的号码为：" ;
    showCode(selectC,7);
    cout << endl;
    getResultC(resultC,7);
    cout << "本次中奖的号码为  ：" ;
    showCode(resultC,7);
    cout << endl;

    int num = daAn(selectC,resultC,7);
    cout << "恭喜您本次中了" << num << "个号" <<endl;
    cout << "恭喜您获得了" ;
    switch (num)
    {
    case 3:
        cout << "5$" << endl;
        break;
    case 4:
        cout << "20$" << endl;
        break;
    case 5:
        cout << "2000$" << endl;
    break;
    case 6:
        cout << "30000$" << endl;
    break;
    case 7:
        cout << "500万$" << endl;
    break;
    default:
        cout << "感谢为福利事业做出的贡献！！" <<endl;
    break;
    }


    return 0;
}
