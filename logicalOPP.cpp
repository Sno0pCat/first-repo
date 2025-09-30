#include <iostream>
using std::cout;
using std::cin;
/* && bOTH VAIRBALES HAVE TO BE TRUE
|| ATLEAST ONE CONDITION IS TRUE
! NEGATE THE LOGICAL STATE*/
int main (){

    double height;
    int age;

    cout << " ENTER UR HEIGT in inches: ";
    cin >> height;
    cout << "ENTER UR AGE";
    cin >> age;

    if ( height <=0 || age <=0 ){
        cout << " INVALID INPUT USE NUMBERS GREATER THAN 0";
    }  
        else if ( height >=200 || age >=120 ){
        cout << " UR TOO OLD OR TOO TALLL";
    } 
        else if ( height <= 60 || age <=17){
            cout << "YOUR TOO YOUNG";
        }
        else if ( height >= 61 && age >= 18){
            cout << "YOU QUALIFY TO ENROLL INTO MILITARY!";
        }

    }