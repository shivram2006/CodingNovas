#include <iostream>
using namespace std;

// Node class (har node me data + next pointer hota hai)
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int d) {
        data = d;
        next = NULL;
    }
};

// Circular Linked List class
class CircularLL {
public:
    Node* head = NULL;

    // Insert function (end me insert karega)
    void insert(int d) {
        Node* n = new Node(d);

        // Agar list empty hai
        if (head == NULL) {
            head = n;
            n->next = head;   // khud ko hi point karega (circular)
            return;
        }

        // Last node find karna
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }

        // New node ko last ke baad add karna
        temp->next = n;
        n->next = head;  // circular link maintain
    }

    // Display function (poori list print karega)
    void display() {
        // Agar list empty hai
        if (head == NULL) {
            cout << "List empty" << endl;
            return;
        }

        Node* temp = head;

        // do-while use karte hain taki head bhi print ho
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }

    // Delete function (given value delete karega)
    void remove(int d) {

        // Agar list empty hai
        if (head == NULL) return;

        Node* temp = head;
        Node* prev = NULL;

        // Case 1: sirf ek node hai
        if (head->next == head && head->data == d) {
            delete head;
            head = NULL;
            return;
        }

        // Case 2: first node delete
        if (head->data == d) {

            // last node find karna
            Node* last = head;
            while (last->next != head) {
                last = last->next;
            }

            head = head->next;   // head shift
            last->next = head;   // circular link update

            delete temp;
            return;
        }

        // Case 3: middle ya last node delete
        do {
            prev = temp;
            temp = temp->next;

            if (temp->data == d) {
                prev->next = temp->next;  // link tod ke connect
                delete temp;
                return;
            }

        } while (temp != head);
    }
};

// Main function
int main() {
    CircularLL l;

    // Insert elements
    l.insert(10);
    l.insert(20);
    l.insert(30);
    l.insert(40);

    cout << "Original List: ";
    l.display();

    // Delete element
    l.remove(20);

    cout << "After Deletion: ";
    l.display();

    return 0;
}