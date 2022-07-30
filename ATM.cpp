#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    int pin;
    int password = 6890;
    int count = 0;
    int optionNumber;
    double deposit = 0.0;
    double withdraw = 0.0;
    double balance = 0.0;
    bool isTrue = true;

    system ( "Color 4E");

   do
    { cout << "***Welcome to Reina Bank***" << endl;
    
    cout << "Insert your card"<<endl;
    
    cout << "PROCESSING..."<< endl;
    
    cout << "Enter your pin"<< endl;
    cin >> pin;

    cout << endl;

     if (pin == password){
        do {
       cout << "PROCEED..."<< endl;
       cout << endl;
       
       cout << "***Welcome to Reina Bank***"<< endl;

       cout << "1. Withdraw"<< endl;
       cout << "2. Deposit" << endl;
       cout << "3. Balance" << endl;
       cout << "4. Exit" << endl;

       cout << "CHOOSE AN OPTION: "<< endl;
       cin >> optionNumber;

       switch (optionNumber)
         {
            case 2 : 
                    cout << "Deposit money :\n";
                    cin >> deposit;
                    balance = balance + deposit;
             break;
            case 1 :
                    if (balance <= 0) {
                    cout << "Please, deposit funds" << endl;
                    }
                    else {

                    cout << " Withdraw money : " << endl;
                    cin >> withdraw;
                    balance = balance - withdraw;

                    }
             break;
            case 3 : 
                    cout << " Check balance: " << balance << endl;
             break;
            case 4 :
                   cout << " Thank you for banking with us" << endl;
                   isTrue = false;
             break;
         }
       }
        while (isTrue != false);
       }

     else {
        count++;
          if ( count == 3) {
           isTrue = false;
      }
          else {
            cout << " Wrong pin! \n";
          }
      }
}
   while ( isTrue != false);
 return 0;
     
}
