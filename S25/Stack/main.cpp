#include <iostream>
using namespace std;

#define SIZE 5

int stack[SIZE];
int top = -1;

// Push function
void push(int x) {
    if (top == SIZE - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    top++;
    stack[top] = x;
    cout << x << " pushed into stack\n";
}

// Pop function
void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return;
    }
    cout << stack[top] << " popped from stack\n";
    top--;
}

// Peek function
void peek() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Top element is: " << stack[top] << endl;
}

// Check empty
bool isEmpty() {
    return (top == -1);
}

int main() {
    push(10);
    push(20);
    push(30);

    peek();

    pop();
    peek();

    return 0;
}