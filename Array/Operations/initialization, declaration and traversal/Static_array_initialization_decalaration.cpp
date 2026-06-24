/******************************************************************************
                Array Basics
                Static array DECLARATION & INITIALIZATION
                traversing of array elements too 
        
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{   //array size is created
    const int n = 5;
    //array elements are initialized
    int arr[n] ={1,2,3,4,5};
    //traversing the array elements
    cout<<"the array elements are\n";
    for(int i =0; i<n; i++){
        cout <<arr[i]<< " ";
    }
    //Method  2 
    int arr2[6];
    cout<<"enter 6 elements of array";
    for (int i =0; i<5; i++){
        cin>>arr2[i];
    }
    cout<<"the entered array is";
    for (int i =0; i<5; i++){
        cout<<arr2[i]<<" ";
        
    }
    
    return 0;
}