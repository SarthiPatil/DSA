#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int DATA[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> DATA[i];
    }


    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && DATA[j] < DATA[j - 1]; j--) {

            DATA[j] = DATA[j] + DATA[j - 1];
            DATA[j - 1] = DATA[j] - DATA[j - 1];
            DATA[j] = DATA[j] - DATA[j - 1];
        }


        cout << "PASS " << i << " : ";
        for (int j = 0; j < n; j++) {
            cout << DATA[j] << " ";
        }
        cout << endl;
    }


    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << DATA[i] << " ";
    }
    cout << endl;

    return 0;
}


/*
Enter the number of elements: 5
Enter elements: 900
90
300
3
22
PASS 1 : 90 900 300 3 22
PASS 2 : 90 300 900 3 22
PASS 3 : 3 90 300 900 22
PASS 4 : 3 22 90 300 900
Sorted Array: 3 22 90 300 900
*/

