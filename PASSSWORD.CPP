#include <iostream>
using std::cout;
using std::cin;

int main (){

    std::string password;
    
    cout << "*************PASSWORD***********"<< '\n';
    cout << "MUST be atleast 8 characters" << '\n';
    cout << "CANNNOT BE GREATER THAN 12" << '\n';
   

    cout << "TYPE YOUR PASSWORD: ";
    std::getline(std::cin,password);

    if(password.length() < 8  ){
        cout << "PASSWORD NEEDS TO ATLEAST 8 CHARACTERS LONG";
    } 
    else if (password.empty()){
        cout << "YOU DIDNT ENTER ANYTHING";
    }
    else if (password.length() > 12){
        cout << "PASSWORD TOo LONG";
    }
    else {
        cout << "YOOUR PASSWORD HAS BEEN SET TO :" << password;
    }
}