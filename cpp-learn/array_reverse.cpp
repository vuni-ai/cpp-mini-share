#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,3,5,7,8,9,11};
    int start = 0;
    int end = size(arr) - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < size(arr); i++) {
       
        cout << arr[i] << " ";
    }

    system("pause");
    return 0;

}