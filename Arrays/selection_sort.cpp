/******************************************************************************
                Selection sort- - Find the minimum element's index in the unsorted part
                                - Swap it with the first element of the unsorted part
                                - time complexity = O(n^2)
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    
    int size;
    cout<<"please enter the size of an array"<<endl;
    cin>>size;
    
    int* arr = new int[size];
    cout<<"please enter "<<size<<" elements in an array"<<endl;
    for(int i =0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"the array elements are as follows"<<endl;
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"The elements of an array in sorted order (ascending order) are as follows"<<endl;
    for(int i =0; i<size; i++){
        int minIndex = i;
        for(int j =i+1; j<size; j++){
            if (arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}