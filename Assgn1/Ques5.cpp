#include <iostream>

using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos;


    cout << "Enter position to delete (1 to " << size << "): ";
    cin >> pos;


    if (pos < 1 || pos > size) {
        cout << "Invalid position!";
        return 0;
    }


    for (int i = pos - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--; // Decrease size

    cout << "Updated Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
