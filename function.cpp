#include <iostream>
using namespace::std;

 void happyBirthday (string name, int age);

int main(){
    //function = a blcok of resuable code
    string name = "menengitis";
    int age = 20;
    happyBirthday(name , age); // can call this as many imes as i want
   

    return 0;

}

void happyBirthday(string name, int age){
    cout << "HAPPY BIRTHDAY TO" << name << "\n";
    cout << "HAPPY BIRTHDAY TO" << name << "\n";
    cout << "HAPPY BIRTHDAY TO" << name << "\n";
    cout << "HAPPY BIRTHDAY TO" << name << "\n";
    cout << "U ARE " << age << "YEARS OLD "; 


}