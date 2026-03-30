#include <iostream>
using namespace std;

// =====================================================
// 🔵 NODE CLASS (Ek coach / ek data unit)
// =====================================================
class Node {
public:
    int data;       // Coach number / value
    Node* next;     // Next coach ka address

    // Constructor
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// =====================================================
// 🔵 LINKED LIST CLASS (Train System)
// =====================================================
class LinkedList {

private:
    Node* head;   // Train ka engine (first node)

public:

    // Constructor
    LinkedList() {
        head = NULL;
    }

    // =====================================================
    // 🟢 INSERT AT BEGINNING (Front me coach add)
    // =====================================================
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);

        newNode->next = head;  // Link new node to old head
        head = newNode;        // Update head

        cout << "[Insert Beginning] " << val << endl;
    }

    // =====================================================
    // 🟢 INSERT AT END (Last me coach add)
    // =====================================================
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);

        // Agar list empty hai
        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;

        // Last node tak jao
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;

        cout << "[Insert End] " << val << endl;
    }

    // =====================================================
    // 🟢 INSERT AT POSITION
    // =====================================================
    void insertAtPosition(int pos, int val) {

        if (pos == 1) {
            insertAtBeginning(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;

        for (int i = 1; i < pos - 1; i++) {
            if (temp == NULL) {
                cout << "Position out of range!\n";
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;

        cout << "[Insert Position " << pos << "] " << val << endl;
    }

    // =====================================================
    // 🔴 DELETE NODE
    // =====================================================
    void deleteValue(int val) {

        if (head == NULL) return;

        // If head needs to be deleted
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "[Deleted] " << val << endl;
            return;
        }

        Node* curr = head;

        while (curr->next != NULL && curr->next->data != val) {
            curr = curr->next;
        }

        if (curr->next == NULL) {
            cout << "Value not found!\n";
            return;
        }

        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;

        cout << "[Deleted] " << val << endl;
    }

    // =====================================================
    // 🔍 SEARCH ELEMENT
    // =====================================================
    void search(int val) {

        Node* temp = head;
        int pos = 1;

        while (temp != NULL) {
            if (temp->data == val) {
                cout << "Value " << val << " found at position " << pos << endl;
                return;
            }
            temp = temp->next;
            pos++;
        }

        cout << "Value not found!\n";
    }

    // =====================================================
    // 🔵 DISPLAY LIST
    // =====================================================
    void display() {

        Node* temp = head;

        cout << "Train (Linked List): ";

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

// =====================================================
// 🔵 MAIN FUNCTION (REAL-LIFE SIMULATION)
// =====================================================
int main() {

    LinkedList train;

    cout << "=== Train Coach Management System ===\n";

    // Insert operations
    train.insertAtEnd(10);
    train.insertAtEnd(20);
    train.insertAtEnd(30);

    train.insertAtBeginning(5);

    train.insertAtPosition(3, 15);

    train.display();

    // Search
    train.search(20);

    // Delete
    train.deleteValue(15);

    train.display();

    return 0;
}