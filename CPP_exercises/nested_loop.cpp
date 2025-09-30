#include <iostream>
using std::cin; // nested loop is a loop withing another loop;
using std::cout;

int main(){
    int coloums;
    int rows;
    char symbol;


    cout << "How many rows do u wnat?: " ;
    cin >> rows;

    cout << "How many couloums do u wnat?: " ;
    cin >> coloums;

   cout << "ENTER A SYMBOL TO USE";
   cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1 ; j<= coloums; j++){
           cout << symbol << " " ;
        }
        cout << '\n'; 
        }

    return 0;

}