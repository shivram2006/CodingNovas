#include <iostream>
using namespace std;

// =====================================================
// 🔵 BASE CLASS (Common for all)
// =====================================================
class Person {
public:
    string name;

    void setName(string n) {
        name = n;
    }

    void showName() {
        cout << "Name: " << name << endl;
    }
};

// =====================================================
// 🟢 1️⃣ SINGLE INHERITANCE
// One parent → one child
// Real-life: Person → Student
// =====================================================
class Student : public Person {
public:
    int rollNo;

    void setStudent(int r) {
        rollNo = r;
    }

    void showStudent() {
        cout << "Role: Student" << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

// =====================================================
// 🟡 2️⃣ MULTILEVEL INHERITANCE
// Grandparent → Parent → Child
// Real-life: Person → Employee → Manager
// =====================================================
class Employee : public Person {
public:
    int salary;

    void setEmployee(int s) {
        salary = s;
    }

    void showEmployee() {
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee {
public:
    int teamSize;

    void setManager(int t) {
        teamSize = t;
    }

    void showManager() {
        cout << "Role: Manager" << endl;
        cout << "Team Size: " << teamSize << endl;
    }
};

// =====================================================
// 🔴 3️⃣ MULTIPLE INHERITANCE
// One child → multiple parents
// Real-life: Teacher + Researcher → Professor
// =====================================================
class Teacher {
public:
    void teach() {
        cout << "Teaching students..." << endl;
    }
};

class Researcher {
public:
    void research() {
        cout << "Doing research..." << endl;
    }
};

class Professor : public Teacher, public Researcher {
public:
    void showRole() {
        cout << "Role: Professor" << endl;
    }
};

// =====================================================
// 🟣 4️⃣ HIERARCHICAL INHERITANCE
// One parent → multiple children
// Real-life: Person → Doctor, Engineer
// =====================================================
class Doctor : public Person {
public:
    void treatPatient() {
        cout << "Treating patient..." << endl;
    }
};

class Engineer : public Person {
public:
    void buildProject() {
        cout << "Building project..." << endl;
    }
};

// =====================================================
// 🟠 5️⃣ HYBRID INHERITANCE (Combination)
// Real-life: Manager + Teacher → TrainerManager
// =====================================================
class TrainerManager : public Manager, public Teacher {
public:
    void showHybridRole() {
        cout << "Role: Trainer Manager" << endl;
    }
};

// =====================================================
// 🔵 MAIN FUNCTION (DEMO ALL TYPES)
// =====================================================
int main() {

    cout << "===== SINGLE INHERITANCE =====" << endl;
    Student s;
    s.setName("Shiv");
    s.setStudent(101);
    s.showName();
    s.showStudent();

    cout << "\n===== MULTILEVEL INHERITANCE =====" << endl;
    Manager m;
    m.setName("Rahul");
    m.setEmployee(50000);
    m.setManager(10);
    m.showName();
    m.showEmployee();
    m.showManager();

    cout << "\n===== MULTIPLE INHERITANCE =====" << endl;
    Professor p;
    p.showRole();
    p.teach();
    p.research();

    cout << "\n===== HIERARCHICAL INHERITANCE =====" << endl;
    Doctor d;
    d.setName("Dr. Sharma");
    d.showName();
    d.treatPatient();

    Engineer e;
    e.setName("Amit");
    e.showName();
    e.buildProject();

    cout << "\n===== HYBRID INHERITANCE =====" << endl;
    TrainerManager tm;
    tm.setName("Karan");  // From Person via Manager
    tm.setEmployee(70000);
    tm.setManager(5);
    tm.showHybridRole();
    tm.teach(); // From Teacher

    return 0;
}