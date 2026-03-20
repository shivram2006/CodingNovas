#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Enqueue (Insert)
void enqueue(int x) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow\n";
        return;
    }

    if (front == -1) { // first element
        front = 0;
    }

    rear++;
    queue[rear] = x;
    cout << x << " inserted into queue\n";
}

// Dequeue (Delete)
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
        return;
    }

    cout << queue[front] << " removed from queue\n";
    front++;
}

// Peek (Front element)
void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Front element is: " << queue[front] << endl;
}

// Check empty
bool isEmpty() {
    return (front == -1 || front > rear);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    peek();

    dequeue();
    peek();

    return 0;
}