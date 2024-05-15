#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
    // 生成六位验证码
    /* 
        1、导入生成随机数的头文件
        2、设置随机数种子
        3、开循环，使循环6次，每次生成一位验证码
        3.1：
            1、随机生成一个数字，该数字取值范围为0~2
            2、如果生成0，本次生成一个大写字母
                    随机生成一个65~90之间的数字
                    将其转换为char型
            如果生成1，本次生成一个小写字母
                    随机生成一个97~122之间的数字
                    将其转换为char型
            如果生成2，本次生成一个大写数字
                    直接输出
     */

    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        int tag = rand() % 3;
        if (tag == 0)
        {
            int x = rand() % 26 +65;
            char c = (char)x;
            cout << c;
        }
        else if (tag == 1)
        {
            int x = rand() % 26 +97;
            char c = (char)x;
            cout << c;
        }
        else
        {
            int x = rand() % 10;
            cout << x;
        }
    }
    cout << endl;
    
    return 0;
}
