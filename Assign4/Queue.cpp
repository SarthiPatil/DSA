#include <iostream>
using namespace std;

#define SIZE 5
//First in First Out
class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % SIZE == front;
    }

    void enqueue(int value) {
        if (isFull()) return;
        if (isEmpty()) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
    }

    int dequeue() {
        if (isEmpty()) return -1;
        int value = arr[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
        return value;
    }

    void display() {
        if (isEmpty()) return;
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    cout << "Dequeued: " << q.dequeue() << endl;
    q.display();
    return 0;
}
/*
10 20 30 40 50
Dequeued: 10
20 30 40 50
*/
