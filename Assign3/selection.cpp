#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the no. of elements: ";
    cin >> n;
    int DATA[n];

    cout << "Enter elements: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> DATA[i];
    }


    for (int i = 0; i < n - 1; i++) {
        int MinIDX = i;

        for (int j = i + 1; j < n; j++) {
            if (DATA[j] < DATA[MinIDX]) {
                MinIDX = j;
            }
        }


        int temp = DATA[i];
        DATA[i] = DATA[MinIDX];
        DATA[MinIDX] = temp;


        cout<<"PASS "<<i+1<<":";
        for(int j=0; j < n; j++){
        cout<<DATA[j]<< " ";}
        cout<< endl;
    }


    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << DATA[i] << " ";
    }
    cout << endl;

    return 0;
}

/* Enter the no. of elements: 5
Enter elements:
500
4
32
1
7
PASS 1:1 4 32 500 7
PASS 2:1 4 32 500 7
PASS 3:1 4 7 500 32
PASS 4:1 4 7 32 500
Sorted Array: 1 4 7 32 500
*/



