/******************************************************************************

                    Deletion at middle
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
    int mid = size/2;
    if(size>0){
        int deletedElement = arr[mid];
        cout<<"Middle index "<<mid<<" deleted Element is "<<deletedElement<<endl;
        for (int i = mid; i<size-1;i++)
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