/******************************************************************************

                    Deletion at given position
                    Time complexity O(n)

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
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int pos;
    cout<<"it is a zero base indexing program so first elemnent of an array is at position 0 "<<endl;
    cout<<"you have "<<size<<" Elements in the array choose the position that must be greater than 0 and less than "<<size<<"for deleting an element";
    cin>>pos;
    if(size>0){
        int deletedElement = arr[pos];
        cout<<"Middle index "<<pos<<" deleted Element is "<<deletedElement<<endl;
        for (int i = pos; i<size-1;i++)
        {
            arr[i] = arr[i+1];
        }
        size--;
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