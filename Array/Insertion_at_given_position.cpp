/******************************************************************************
                Array Basics
                DYNAMIC ARRAY - Insertion at given position
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
    int pos; 
    cout<<"You have "<<size<<" elements in the array Enter the position where you want to enter the element\n";
    cin>>pos;
    
    if(pos<0 ||pos>size){
        cout<<"Invalid position please enter the correct position from 0 to "<<size;
        return 1;
    }
    cout<<" enter the element to insert at the "<<pos<<" position";
    int n;
    cin>>n;
    for(int i = size; i> pos; i-- ){
        arr[i]=arr[i-1];
    }
    arr[pos]=n;
    size++;
    cout<<"array after insertion at "<<pos<<endl;
    for(int i =0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"The size of updated array is "<<size<<endl;
    
    delete[] arr;
    return 0;
}
