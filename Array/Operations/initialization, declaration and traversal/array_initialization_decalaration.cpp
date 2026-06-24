/******************************************************************************
                Array Basics
                Dynamic array DECLARATION & INITIALIZATION
                traversing of array elements too 
        
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // get the size from the user
    
    int size;
    cout<<"enter the size of an array\n";
    cin>>size;
    
    //check if size is 0 or negative
    
    if (size <=0 ){
        cout<<"size cannot be negative or zero please enter the positive size";
    
        return 1;
    }
    
    //dynamic memory DECLARATION and INITIALIZATION
    // this creates an array of size in the HEAP memory
    
    int* arr = new int[size];
    cout<<"enter the "<<size<<"elements\n";
    
    //user input (initialization of array)
    for(int i =0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"array elements are inserted\n ";
    
    //traversing the array elements 
    
    cout <<"array elements are\n";
    for (int i =0; i<size; i++){
        cout<<arr[i]<<"\n";
    }
    //crucial step to delete the memory after initialization and declaration 
    delete[] arr;
    arr = nullptr;
    cout<<"Memory deallocated successfully";
    return 0;
}