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
    
    int data[18] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int input;
    bool found = false;
    
    cout << "INPUT ACCOUNT NUMBER: ";
    cin >> input;
    
    for(int i = 0; i < sizeof(data); i++){
        if(data[i] == input){
            found = true;
        }
    }
    
    if(found){
        cout<<"The account number you have submitted is valid! :)";
    }
    else{
        cout<<"The account number you have submitted is invalid! :(";
    }
    
    
    

    return 0;
}
