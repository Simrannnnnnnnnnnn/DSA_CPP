/******************************************************************************
                Array Basics
                DYNAMIC ARRAY - Insertion at beginning 
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
    int* arr = new int[size];
    
    cout<<"enter the "<<size<<" elements "<<endl;
    for(int i =0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Array elements after insertion are "<<endl;
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    int n;
    cout<<"enter the element to insert at the beginning"<<endl;
    cin>>n;
    
    int* temp= new int[size+1];
    temp[0] = n;
    for (int i =0; i<size; i++){
        temp[i+1]=arr[i];
    }
    delete[] arr;
    arr = temp;
    size++;
    
    cout<<"array after insertion at beginning"<<endl;
    for(int i =0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}