#include <iostream>
using std::cin;
using std::cout;

int main()
{
    char grade;

    cout << "enter a grade from A-F: " ;
    cin >> grade;

    switch(grade){
        case 'A':
          cout << "you did good"; 
           break;
    case 'B' :
        cout << " You did ok";
        break;
    case 'C':
        cout << "U did alright";
        break;
    case 'D':
        cout << "you did terrible";
        break;
    case 'F':
        cout << "YOU FAILURE";
        break;
    default:
        cout << "ENTER A LETTER A-F";
    }
    return 0;

}
