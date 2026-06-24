/******************************************************************************
    DSA A2Z - Arrays
    File: dynamic_deletion_at_end.cpp
    Topic: Dynamic Array - Deletion at End
    Time Complexity: O(1)
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if(size <= 0) {
        cout << "Error: Size must be greater than 0!" << endl;
        return 1;
    }

    int* arr = new int[size];

    cout << "Enter " << size << " elements: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "\nOriginal Array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deletion at End
    if(size > 0) {
        int deletedElement = arr[size - 1];
        size--;                    // Most Important Line

        cout << "Deleted Element from End: " << deletedElement << endl;
    } 
    else {
        cout << "Array is already empty!" << endl;
    }

    cout << "Array After Deletion: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Updated Size: " << size << endl;

    // Free Memory (Very Important)
    delete[] arr;
    arr = nullptr;

    return 0;
}