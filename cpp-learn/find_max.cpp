#include <iostream>
using namespace std;

int main() {
    int arr[] = {153,45,999,75,86,9854,842,1466,584,1541,4641,451,4517,9548,97411,4841};
    int max = arr[0];
    for (int i = 0; i < size(arr); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Maximum value is: " << max << endl;

    system("pause");
    return 0;

}