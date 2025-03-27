#include <iostream>
using namespace std;

int main() {

    //对于二维数组的理解，类似于一个矩阵，行和列的索引从0开始
    int arr[4][5] = {

        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };
    //打印二维数组的所有元素
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    system("pause");
    return 0;


}