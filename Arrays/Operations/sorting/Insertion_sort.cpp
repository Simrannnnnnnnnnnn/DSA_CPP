/******************************************************************************
                Insertion sort-
                a simple, in-place sorting algorithm that builds a sorted array one element at a time.
                It works similarly to the way you organize playing cards in your hands: you take an unsorted card and 
                shift all larger cards over to drop it into its correct position.
                
                Algorithm 
                1- Assume the first element is already sorted.
                2- Pick the next unsorted element (the key).
                3- Compare the key with elements in the sorted section (moving right-to-left).
                4- Shift all larger elements one position to the right to make a gap.
                5- Insert the key into its correct empty slot.Repeat until the entire array is sorted
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
    for(int i =1; i<size; i++){ 
        //assumed that first element is already sorted , so starting with first element arr[1]
        int key = arr[i]; 
        // pick the current element to be inserted
        int j = i-1; 
        //j points to the last element of the sorted part
        while (j >= 0 && arr[j]> key){ 
            // shift elements right until correct position is found
            arr[j+1]=arr[j];
            // move larger element one position to the right
            j--; 
            // move left in the sorted part

        }
        arr[j+1]=key; 
        // insert key at its correct position

    }
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
