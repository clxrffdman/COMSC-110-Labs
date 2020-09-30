/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <iomanip>


using namespace std;

int randomChoice();
int winnerCalc(int, int);


int main()
{
    bool active;
    int playerChoice;
    int randChoice;
    active = true;
    while(active){
        
        randChoice = randomChoice();
        cout << "Select choice:\n1. Rock\n2. Paper\n3. Scissors\n";
        cin >> (playerChoice);
    
        if(playerChoice == 1){
            cout << "You chose Rock!\n\n";
        }
        else if(playerChoice == 2){
            cout << "You chose Paper!\n\n";
        }
        else if(playerChoice == 3){
            cout << "You chose Scissors!\n\n";
        }
        else{
            cout << "Error, invalid input! Please resubmit.";
            cin >> (playerChoice);
        }
    
        if(randChoice == 1){
            cout << "AI chose Rock!\n\n";
        }
        if(randChoice == 2){
            cout << "AI chose Paper!\n\n";
        }
        if(randChoice == 3){
            cout << "AI chose Scissors!\n\n";
        }
        
        if(playerChoice == randChoice){
            cout <<"Draw! Continue playing.\n\n";
        }
        else{
            if(winnerCalc(playerChoice,randChoice) == 0){
                cout << "You win!";
            }
            if(winnerCalc(playerChoice,randChoice) == 1){
                cout << "You lose!";
            }
            if(winnerCalc(playerChoice,randChoice) == -1){
                cout << "Error!";
            }
            
            
            active = false;
        }
    
    }
    
    
    
    

    return 0;
}

int randomChoice(){
    srand((unsigned) time(0));
    int aiChoice = (rand() % 3) + 1;
    
    
    return aiChoice;
}

int winnerCalc(int a, int b){
    
    if(a == 1 && b == 2){
        return 1;
    }
    
    if(a == 1 && b == 3){
        return 0;
    }
    
    if(a == 2 && b == 1){
        return 0;
    }
    
    if(a == 2 && b == 3){
        return 1;
    }
    
    if(a == 3 && b == 1){
        return 1;
    }
    
    if(a == 3 && b == 2){
        return 0;
    }
    
    return -1;
}






