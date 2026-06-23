/******************************************************************************
                Array Basics
                Vector - Dynamic array DECLARATION & INITIALIZATION
                traversing of array elements WIth Vectors 
        
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
    arr.push_back(89); //size of vector increase as soon as we push a new element 
    cout<<"array size after entering the element are"<< arr.size();
    return 0;
}
