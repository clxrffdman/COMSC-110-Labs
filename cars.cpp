/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct Car{
    string make;
    string model;
    int year;
    double cost;
};

int main()
{
    string inputS;
    string inputSDos;
    int inputI;
    double inputD;
    
    Car carArray[3];
    
    for(int i = 0; i < 3; i++){
        cout<<"Car " << (i+1) << ":\nMake: ";
        cin >> inputS;
        cout << "\nModel: ";
        cin >> inputSDos;
        cout << "\nYear: ";
        cin >> inputI;
        cout << "\nCost: ";
        cin >> inputD;
        carArray[i] = {inputS, inputSDos, inputI, inputD};
    }
    
    
    
    
    for(int i = 0; i < sizeof(carArray)/sizeof(carArray[0]); i++){
        cout << carArray[i].year << " " << carArray[i].make << " " << carArray[i].model << ": $" << carArray[i].cost << "\n";
    }
    
    
    

    return 0;
}
