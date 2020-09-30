/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string input;
    
    cout<<"Welcome esteemed customer!\nMake a selection from our menu below!\n\n1. Water $10\n2. Squid $15\n3. Rutabaga $8\n4. Celery $2\nInput a number between 1 and 4 to select an item from the menu:\n";
    
    cin >> input;
    
    if(input == "1"){
        cout<< "\nWater is pretty nice.";
    }
    else if(input == "2"){
        cout<< "\nSquid isn't very nice.";
    }
    else if(input == "3"){
        cout<< "\nWhat's a rutabaga?";
    }
    else if(input == "4"){
        cout<< "\nCelery is horrible.";
    }
    else{
        cout<< "\nError, input invalid.";
    }
    
    
    return 0;
}
