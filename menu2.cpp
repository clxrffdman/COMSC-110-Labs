/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int input;
    
    cout<<"Welcome esteemed customer!\nMake a selection from our menu below!\n\n1. Water $10\n2. Squid $15\n3. Rutabaga $8\n4. Celery $2\nInput a number between 1 and 4 to select an item from the menu:\n";
    
    cin >> input;
    
    switch(input){
        case 1: cout<< "\nWater is pretty nice.";
        break;
        
        case 2: cout<< "\nSquid isn't very nice.";
        break;
        
        case 3: cout<< "\nWhat's a rutabaga?";
        break;
        
        case 4: cout<< "\nCelery is horrible.";
        break;
        
        default: cout<< "\nError, input invalid.";
        
    }
   
    
    
    return 0;
}
