#include <iostream>
using namespace std;
// 给你一个字符数组 letters,以及一个字符 target。letters 里至少有两个不同的字符。
// 返回 letters 中大于 target 的最小的字符。
// 如果不存在这样的字符，则返回 letters 的第一个字符。
void sort_ch(char* letter,int len);
char sele_mimax(char* let,int len,char target);
/*
    思路：对数组中的元素排序
    对排序后的数组进行二分查找
    先对最大值判断，最大都小则返回错误
    对中间值判断，中间值小，则向右找，中间值大则向左找，直到最后找到
*/
int main(int argc, char const *argv[])
{
    /* code */
    int n = 0;
    char target = ' ' ;
    cout << "请输入数组元素个数：" << endl;
    cin >> n;
    char letters[n] = {};
    // char resu[n] = {};
    cout << "请输入数组元素：" << endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> letters[i];
    }
    cout << "请输入要比较的字符：" << endl;
    cin >> target;
    sort_ch(letters,n);
    sele_mimax(letters,n,target);
    return 0;
}
void sort_ch(char* letter,int len)
{
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-1-i; j++)
        {
            /* code */
            if (letter[j] > letter[j+1])
            {
                char jiao = letter[j];
                letter[j] = letter[j+1];
                letter[j+1] = jiao;
            }
            
        }
        
    }
    cout << "排序后：" << endl;
    for (int i = 0; i < len; i++)
    {
        /* code */
        cout << letter[i] << " " ;
    }
    cout << endl;
    
}

char sele_mimax(char* let,int len,char target)
{
    int sel = 0;
    int max = len - 1;
    if (let[max] <= target)
    {
        /* code */
        cout << "该组中没有大于字符" << target << "的元素。" << endl;
        return let[0];
    }
    while (sel < max)
    {
        /* code */
        int mid = (sel + max) / 2;
        if (let[mid] <= target)
        {
            /* code */
            sel = mid + 1;
        }
        else
        {
            max = mid;
        }
    }
    cout << "该组中大于" << target << "的最小元素为" << let[sel] << endl;
    return let[sel];
    
}