#include <iostream>
using std::cin;
using std::cout;

int main(){

    int number; // do while loop = do some block of code first, 
    //                                  then repeat the code if the condition is true. 

    do{
        cout << "EnTER A POSTIVE # :" ;
        cin >> number;
    }while(number <= 0);

    cout << "This # is: " << number ;

    return 0;

}