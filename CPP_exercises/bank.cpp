#include <iostream>
using namespace::std;


void showbankbalance(double balance);
double withdrawBalance(double balance);
double depositBalance();

int main(){
    double balance = 0;
    int choice = 0;

    do{
        cout << "ENTER UR CHOICE: \n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit money \n";
        cout << "3. Withdrdaw money \n";
        cout << "4. exit \n";
        cin >> choice;
     
        switch(choice){
         case 1: showbankbalance(balance);
             break;
         case 2: balance += depositBalance();
            showbankbalance(balance);
             break;
         case 3: balance -= withdrawBalance(balance);
            showbankbalance(balance);
             break;
         case 4: cout << "THANKS FOR VISSITING";
             break;
         default: cout << "INVALID CHOICE";
     
        }
    }while(choice != 4);
   


    return 0;
}

void showbankbalance(double balance){
    cout << "YOur balance is $ " << balance << '\n';
}

double withdrawBalance(double balance){
    double amount = 0;

    cout << "ENTER AMOUNT TO BE WITHDRAWN ";
    cin >> amount;

    
    if(amount > balance){
        cout << "INSUFFICIENT FUNDS";
        return 0;

    }else {
        return amount;
    }

}
double depositBalance(){
    
    double amount = 0;

    cout << "ENTER AMOUNT TO BE DEPOSITED ";
    cin >> amount;
 if(amount > 0){
    return amount;
 }
 else {
    cout << " THATS INVALID";
    return 0;
 }
}
