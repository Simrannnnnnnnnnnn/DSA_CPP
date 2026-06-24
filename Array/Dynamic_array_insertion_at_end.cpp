/******************************************************************************
                Array Basics
                DYNAMIC ARRAY - Insertion at end
                Time Complexity o(1) 
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
    
    int n;
    cout<<"enter the element to insert at the end"<<endl;
    cin>>n;
    
    cout<<"array after insertion at end"<<endl;
    arr[size]=n;
    size++;
   
    for(int i =0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    
    delete[] arr;
    return 0;
}
