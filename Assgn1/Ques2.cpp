#include <iostream>

using namespace std;

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[size]; // Destination array


    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }


    cout << "Copied Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
