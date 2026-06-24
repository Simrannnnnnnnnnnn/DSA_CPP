/******************************************************************************
                Array Basics
                VECTOR - Insertion at beginning 
                Time Complexity o(n) 
*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
int main()
{   int size; 
    cout<<"Enter the size of array\n";
    cin>>size;
    
    if (size<=0){
        cout<<"sorry! size cant be zero or negative please enter positive size";
        return 1;
    }
    vector<int> arr(size); //Dynamic +safe
    cout<<"Enter "<<size<<"array elements\n";
    for (int i =0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"array elements are"<<endl;
    for(int num : arr){           //Range based loop
        cout << num << " ";
    }
    int n ; //getting element from user to insert at beginning
    cout<<"enter the element to insert at beginning";
    cin>>n;
    arr.push_back(0); //pushing back the array so that size must increase
    //for loop for RIGHT SHIFT
    for(int i = size; i >0; i--){
        arr[i] = arr[i-1];
    }
    //inserting array element at 0 index
    arr[0]=n;
    cout<<"element inserted successfully ! array after insertion at beginnig \n";
    for(int i =0; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}