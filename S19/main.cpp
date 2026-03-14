#include <iostream>
#include <vector>   // Header file required to use vector

using namespace std;

int main()
{

    /*
    ------------------------------------------------------------
    WHAT IS A VECTOR?
    ------------------------------------------------------------
    Vector is a dynamic array provided by the C++ STL (Standard
    Template Library).

    Unlike normal arrays, vectors can grow or shrink in size
    automatically during runtime.

    Example:
    Array size must be fixed.
    Vector size can change dynamically.
    ------------------------------------------------------------
    */

    // Declaring a vector of integers
    vector<int> v;

    /*
    vector<int>  -> vector storing integers
    v            -> name of vector
    */

    // Adding elements into vector using push_back()
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    /*
    push_back() function adds element at the end of vector
    */

    cout << "Elements in vector are:\n";

    // Accessing elements using index
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;


    /*
    ------------------------------------------------------------
    IMPORTANT VECTOR FUNCTIONS
    ------------------------------------------------------------
    */

    // size() -> returns number of elements
    cout << "Size of vector: " << v.size() << endl;

    // capacity() -> total memory allocated
    cout << "Capacity of vector: " << v.capacity() << endl;

    // front() -> first element
    cout << "First element: " << v.front() << endl;

    // back() -> last element
    cout << "Last element: " << v.back() << endl;


    /*
    ------------------------------------------------------------
    REMOVING ELEMENTS
    ------------------------------------------------------------
    */

    // pop_back() removes last element
    v.pop_back();

    cout << "After pop_back(): ";

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;


    /*
    ------------------------------------------------------------
    INSERTING ELEMENT AT SPECIFIC POSITION
    ------------------------------------------------------------
    */

    // Insert element at index 1
    v.insert(v.begin() + 1 , 99);

    cout << "After inserting 99 at index 1: ";

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;


    /*
    ------------------------------------------------------------
    DELETING ELEMENT AT SPECIFIC POSITION
    ------------------------------------------------------------
    */

    // Delete element at index 2
    v.erase(v.begin() + 2);

    cout << "After deleting element at index 2: ";

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;


    /*
    ------------------------------------------------------------
    CLEARING VECTOR
    ------------------------------------------------------------
    */

    // clear() removes all elements
    v.clear();

    cout << "Size after clear(): " << v.size() << endl;


    /*
    ------------------------------------------------------------
    SUMMARY
    ------------------------------------------------------------
    Important vector operations:

    push_back() -> add element
    pop_back()  -> remove last element
    size()      -> number of elements
    capacity()  -> memory allocated
    insert()    -> insert element at position
    erase()     -> delete element
    clear()     -> remove all elements
    front()     -> first element
    back()      -> last element
    */

    return 0;
}