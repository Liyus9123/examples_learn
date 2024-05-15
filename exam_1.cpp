#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* 思路 */
    // 满100打八折，会员打八折
    // 会员满100折上折
    // 定义变量记录消费金额，定义变量是否为会员，判断消费金额是否大于等于100
    // 1、大于等于100（打八折，记录应付金额）
    // 2、判断是否为会员（是会员，再打八折，再次计算应付金额）
    // 3、输出结果：本次应付金额、实付金额、本次优惠xxx元
    // 4小于100，判断是否会员，计算应付金额

    double money = 0;
    bool vip = false;
    cout << "请输入本次消费金额：" << endl;
    cin >> money ; 
    cout << "您是否为会员？" << endl;
    char tag = ' ';
    cin >> tag ;

    if (money < 0)
    {
        cout << "金额有误！重新输入：" << endl;
        cin >> money ;
    }
    if (tag == 'Y' || tag == 'y')
    {
        vip = true;
    }
    double m = money ;
    if (money >= 100)
    {
        if (vip)
        {
            m = money * 0.8 *0.8 ;
            cout << "您本次应付金额为:" << money << "元," << "实付金额为：" << m << "元，" << "优惠了：" << money-m << "元。" << endl;
        }
        else
        {
            m = money * 0.8 ;
            cout << "您本次应付金额为:" << money << "元," << "实付金额为：" << m << "元，" << "优惠了：" << money-m << "元。" << endl;
        }
        
    }
    else
    {
            if (vip)
        {
            m = money * 0.8 ;
            cout << "您本次应付金额为:" << money << "元," << "实付金额为：" << m << "元，" << "优惠了：" << money-m << "元。" << endl;
        }
        else
        {
            m = money ;
            cout << "您本次应付金额为:" << money << "元," << "实付金额为：" << m << "元，" << "优惠了：" << money-m << "元。" << endl;
        }
    }
    

    return 0;
}
