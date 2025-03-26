#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the no. of elements: ";
    cin >> n;
    int DATA[n];

    cout << "Enter the elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> DATA[i];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(DATA[j] > DATA[j + 1]){
                int temp = DATA[j];
                DATA[j] = DATA[j + 1];
                DATA[j + 1] = temp;
            }
        }


        cout << "PASS " << i + 1 << ": ";
        for(int j = 0; j < n; j++){
            cout << DATA[j] << " ";
        }
        cout << endl;
    }

    cout << "\n Sorted Array : ";
    for(int i = 0; i < n; i++){
        cout << DATA[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
Enter the no. of elements: 7
Enter the elements:
90
2
1
45
7
72
50
PASS 1: 2 1 45 7 72 50 90
PASS 2: 1 2 7 45 50 72 90
PASS 3: 1 2 7 45 50 72 90
PASS 4: 1 2 7 45 50 72 90
PASS 5: 1 2 7 45 50 72 90
PASS 6: 1 2 7 45 50 72 90

 Sorted Array : 1 2 7 45 50 72 90

*/

