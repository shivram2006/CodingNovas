#include <iostream>
using namespace std;

// ================= CLASS DEFINITION =================
class Student {
public:
    string name;
    int age;

    // Function to take input
    void input() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    // Function to display data
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// ================= MAIN FUNCTION =================
int main() {

    // ================= EXAMPLE 1 =================
    // Creating single object
    Student s1;

    // Assigning values manually
    s1.name = "Shiv";
    s1.age = 20;

    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << endl;

    // ================= EXAMPLE 2 =================
    // Creating another object
    Student s2;

    // Taking input from user
    cout << "Enter details for Student 2:" << endl;
    s2.input();

    cout << "Student 2 Details:" << endl;
    s2.display();

    cout << endl;

    // ================= EXAMPLE 3 =================
    // Multiple objects using array
    Student arr[2];

    cout << "Enter details for 2 students:" << endl;

    for (int i = 0; i < 2; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        arr[i].input();
    }

    cout << "All Students Data:" << endl;

    for (int i = 0; i < 2; i++) {
        arr[i].display();
    }

    return 0;
}