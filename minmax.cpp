/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>


using namespace std;

int main()
{
    string a[10];
    int maxSize = 0;
    int minSize = 0;
    
    
    
    for(int i = 0; i < 10; i++){
        cout << "SUBMIT VALUE:\n";
        cin >> a[i];
        
    }
    
    
    
    for(int i = 0; i < 10; i++){
        if(a[i].size() > a[maxSize].size()){
            maxSize = i;
        }
        if(a[i].size() < a[minSize].size()){
            minSize = i;
        }
    }

    cout << "LARGEST VALUE IS: " << a[maxSize] << "\n";
    cout << "LOWEST VALUE IS: " << a[minSize] << "\n";
    
    return 0;
}
