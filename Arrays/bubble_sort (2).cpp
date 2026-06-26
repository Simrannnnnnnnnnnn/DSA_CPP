/******************************************************************************
                Bubble sort 
                sorting in ascending order 
                time complexity = O(n^2)
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
        for(int j =0; j<size-1-i; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}