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
       
       cout << "******Welcome to Reina Bank******"<< endl;

       cout << "1. Withdraw"<< endl;
       cout << "2. Deposit" << endl;
       cout << "3. Balance" << endl;
       cout << "4. Exit" << endl;

       cout << "CHOOSE AN OPTION: "<< endl;
       cin >> optionNumber;

       switch (optionNumber)
         {
            case 1 : 
                    cout << "Deposit money :\n";
                    cin >> deposit;
                    balance = balance + deposit;
             break;
            case 2 :
                    cout << " Withdraw money : " << endl;
                    cin >> withdraw;
                    balance = balance - withdraw;
             break;
            case 3 : 
                    cout << " Check balance: " << endl;
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
