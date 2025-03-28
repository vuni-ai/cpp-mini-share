#include <iostream>
using namespace std;

/*
冒泡排序：
比较相邻的元素。如果第一个比第二个大，就交换他们两个。
对每一对相邻元素做同样的工作，从开始第一对到结尾的最后一对。在这一点，最后的元素应该会是最大的数。
针对所有的元素重复以上的步骤，除了最后一个。
持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
*/
int main() {
    int arr[] = { 153,45,999,75,86,9854,842,1466,584,1541,4641,451,4517,9548,97411,4841 };
    cout << "原本的数组: ";
    for (int i = 0; i < size(arr); i++)
    {
        cout <<arr[i] << " ";
    }
    //总共排序轮数为: 数组长度-1
    for (int i = 0; i < size(arr)-1; i++)
    {
        //每一轮排序对比的次数为: 数组长度-1-i
        for (int j = 0; j < size(arr)-i-1; j++)
        {
            //如果第一个数比第二个数大，交换两个数
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
    cout << "\n排序后数组: ";
    for (int i = 0; i < size(arr); i++)
    {
        cout <<arr[i] << " ";
    }
    
    system("pause");
    return 0;



}