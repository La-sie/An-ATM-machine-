#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    int pin;
    int password = sella275;
    int count = 0;
    int optionNumber;
    double deposit = 0.0;
    double withdraw = 0.0;
    double balance = 0.0;
    bool isTrue = true;
   do
    { cout << "******Welcome to Reina Bank******" << endl;
    
    cout << "Insert your card"<<endl;
    
    cout << "PROCESSING..."<< endl;
    
    cout << "Enter your pin"<< endl;
    cin >> pin;

    cout << endl;

     if (pin = password){
       cout << "PROCEED..."<< endl;
       cout << endl;

       cout << "1. Withdraw"<< endl;
       cout << "2. Deposit" << endl;
       cout << "3. Balance" << endl;
       cout << "4. Exit" << endl;

       cout << "CHOOSE AN OPTION: "<< endl;
       cin >> optionNumber;

       switch (optionNumber)
         {
            case 1 :
             break;
            case 2 :
             break;
            case 3 :
             break;
            case 4 :
             break;
         }
       }

     else {
        count++
          if ( count == 3) {
           isTrue = false;
     }
          else {
            cout << " Wrong pin! \n";
    }
    while {

    } 
}
