#include <iostream>

using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5; // Current size of the array
    int pos, value;


    cout << "Enter position (1 to " << size + 1 << "): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;


    if (pos < 1 || pos > size + 1) {
        cout << "Invalid position!";
        return 0;
    }


    for (int i = size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }


    arr[pos - 1] = value;
    size++;


    cout << "Updated Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
