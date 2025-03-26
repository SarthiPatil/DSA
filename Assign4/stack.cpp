#include <iostream>
using namespace std;
//Last in First Out
class Stack {
private:
    int top;
    int size;
    int* stack;

public:
    Stack(int s) {
        size = s;
        stack = new int[size];
        top = -1;
    }

    void push(int value) {
        if (top >= size - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            stack[++top] = value;
        }
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
        } else {
            cout << "Popped: " << stack[top--] << endl;
        }
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }

    ~Stack() {
        delete[] stack;
    }
};

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack s(size);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    s.pop();
    s.display();

    return 0;
}
/*Enter the size of the stack: 5
Stack elements: 10 20 30 40 50
Popped: 50
Stack elements: 10 20 30 40
*/
