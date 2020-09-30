/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int* arrayExpander(int *input, int size){
    
    cout << "Final Array: ";
    int *arr = nullptr;
    
    arr = new int[size*2];
    
    for(int i = 0; i < size; i++){
        arr[i] = input[i];
        cout << arr[i];
    }
    
    for(int i = size; i < (size*2); i++){
        arr[i] = 0;
        cout << arr[i];
    }
    
    
    
    return arr;
    
    
    
}

int main()
{
    
    cout << "Initial array: ";
    
    
    
    int nCount[] = {4, 2, 8, 2};
    
    for(int i = 0; i < sizeof(nCount)/sizeof(nCount[0]); i++){
        cout << nCount[i];
    }
    
    cout << "\n\n";
    int *ptr = nCount;
    
    
    cout << "\n\nNew array pointer address: " << arrayExpander(ptr, sizeof(nCount)/sizeof(nCount[0]));
    
    
}


