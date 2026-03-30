#include <iostream>
using namespace std;

// =====================================================
// 🔵 REAL-LIFE FUNCTION: BANK BALANCE UPDATE
// Pointer used to modify original data
// =====================================================
void depositMoney(int* balance, int amount) {
    // Pointer ka use karke original value update kar rahe hain
    *balance += amount;

    cout << "[Deposit] Amount added: " << amount << endl;
}

// =====================================================
// 🔵 REAL-LIFE FUNCTION: SWAP (EXCHANGE ITEMS)
// =====================================================
void swapMoney(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "[Swap] Values swapped successfully\n";
}

int main() {

    cout << "========== BASIC POINTER ==========\n";

    // 🏠 Real-life: Ghar (value) aur uska address (pointer)
    int money = 1000;

    // Pointer jo money ka address store karega
    int* ptr = &money;

    cout << "Original Money: " << money << endl;
    cout << "Address of money: " << &money << endl;
    cout << "Pointer stores address: " << ptr << endl;
    cout << "Value using pointer (*ptr): " << *ptr << endl;

    // =====================================================
    // 🔵 MODIFY VALUE USING POINTER
    // =====================================================
    cout << "\n========== MODIFY USING POINTER ==========\n";

    *ptr = 2000;  // Directly original variable change

    cout << "Updated Money: " << money << endl;

    // =====================================================
    // 🔵 PASS BY POINTER (REAL-LIFE BANK SYSTEM)
    // =====================================================
    cout << "\n========== PASS BY POINTER ==========\n";

    depositMoney(&money, 500);  // Address pass kiya

    cout << "Final Balance: " << money << endl;

    // =====================================================
    // 🔵 POINTER WITH ARRAY (WAREHOUSE SYSTEM)
    // =====================================================
    cout << "\n========== POINTER WITH ARRAY ==========\n";

    int items[] = {10, 20, 30, 40};

    int* p = items;  // array ka first element ka address

    cout << "Items using pointer:\n";

    for (int i = 0; i < 4; i++) {
        cout << "Item " << i << ": " << *(p + i) << endl;
    }

    // =====================================================
    // 🔵 POINTER ARITHMETIC (MOVE BETWEEN ADDRESSES)
    // =====================================================
    cout << "\n========== POINTER ARITHMETIC ==========\n";

    cout << "First value: " << *p << endl;
    cout << "Second value: " << *(p + 1) << endl;
    cout << "Third value: " << *(p + 2) << endl;

    // =====================================================
    // 🔵 DOUBLE POINTER (MANAGER → EMPLOYEE RELATION)
    // =====================================================
    cout << "\n========== DOUBLE POINTER ==========\n";

    int salary = 50000;
    int* empPtr = &salary;
    int** managerPtr = &empPtr;

    cout << "Salary: " << salary << endl;
    cout << "Using single pointer: " << *empPtr << endl;
    cout << "Using double pointer: " << **managerPtr << endl;

    // =====================================================
    // 🔵 SWAP USING POINTER (REAL-LIFE EXCHANGE)
    // =====================================================
    cout << "\n========== SWAP USING POINTER ==========\n";

    int a = 5, b = 10;

    cout << "Before Swap: " << a << " " << b << endl;

    swapMoney(&a, &b);

    cout << "After Swap: " << a << " " << b << endl;

    // =====================================================
    // 🔵 NULL POINTER (SAFE INITIALIZATION)
    // =====================================================
    cout << "\n========== NULL POINTER ==========\n";

    int* nullPtr = NULL;

    cout << "Null Pointer Value: " << nullPtr << endl;

    // =====================================================
    // 🔵 DANGLING POINTER (IMPORTANT CONCEPT)
    // =====================================================
    cout << "\n========== DANGLING POINTER ==========\n";

    int* dPtr = new int(100);  // dynamic memory allocate

    cout << "Value before delete: " << *dPtr << endl;

    delete dPtr;  // memory free

    // dPtr ab dangling pointer hai (dangerous)
    cout << "After delete, pointer becomes dangling (do not use!)\n";

    return 0;
}