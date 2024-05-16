#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int nums[] = {123,423,543,52,54,32,54,564};
    // 取值
    // cout << nums[3] << endl;
    // // 存值，改值
    // nums[3] = 55;
    // cout << nums[3] << endl;

    int len = sizeof(nums) / sizeof(nums[0]);
    // cout << "len = " << len << endl;

    for (int i = 0; i < len; i++)
    {
        /* code */
        cout << nums[i] << endl;
        cout << "----------" << endl;
    }
    

    return 0;
}
