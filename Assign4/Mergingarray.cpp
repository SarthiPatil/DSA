#include <iostream>
using namespace std;

int main() {
    int size1, size2;
    cout << "enter first array ";
    cin >> size1;

    cout << "enter second array ";
    cin >> size2;

    int arr1[size1], arr2[size2], merged[size1 + size2];

    cout << "enter the elements of array   ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    cout << "enter the elements of array   ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    cout << "merged array is: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << merged[i] << " ";
    }

    cout << endl;
    return 0;
}
/*enter first array 4
enter second array 5
enter the elements of array   1
5
3
9
enter the elements of array   8
4
6
1
5
merged array is: 1 5 3 9 8 4 6 1 5
*/
