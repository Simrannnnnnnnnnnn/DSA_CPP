/******************************************************************************
                Array Basics
                DYNAMIC ARRAY - Insertion at middle
                Time Complexity o(n) 
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{   int size; 
    cout<<"Enter the size of array\n";
    cin>>size;
    
    if (size<=0){
        cout<<"sorry! size cant be zero or negative please enter positive size";
        return 1;
    }
    int* arr = new int[size+1];
    
    cout<<"enter the "<<size<<" elements "<<endl;
    for(int i =0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Array elements after insertion are "<<endl;
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"You have "<<size<<" elements in the array enter the element to insert at the middle";
    int n;
    cin>>n;
    
    int index = size/2;
    
    for (int i = size; i>index; i--){
        arr[i]= arr[i-1];
        
    }
    arr[index]=n;
    size++;
    cout<<"array after insertion at middle"<<endl;
    for(int i =0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"The size of updated array is "<<size<<endl;
    
    delete[] arr;
    return 0;
}