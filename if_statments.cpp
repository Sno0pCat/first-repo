#include <iostream>
using std::cin;
using std::cout;

int main (){

    // if statements  = do something if a condition is true.
    //                  if not, then dont do it.

    int age;

    cout << "enter your age: ";
    cin >> age;

    if(age >= 18){
        cout << "welcome to the site";

    }
    else if (age <0){
        cout << "you havent been born yet";
    }
    else{
        cout << "your not old enough to be here";
    }

    return 0;
}