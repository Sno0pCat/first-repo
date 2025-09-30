#include <iostream>
using std::cin;
using std::cout;

int main(){


    cout << "******************CALCULATOR*******************" << '\n';

    char op;
    double num1;
    double num2;
    double result;

    cout << " WHAT OPERATION DO U WNAT (+ - / *)? ";
    cin >> op;

    cout << "ENTER NUMber 1 " ;
    cin >> num1;

    cout << "ENTER NUMber 2 " ;
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << result << '\n';
        break;
        case '*':
        result = num1 * num2;
        cout << result << '\n';
        break;
        case '-':
        result = num1 - num2;
        cout << result << '\n';
        break;
        case '/':
        result = num1 / num2;
        cout << result << '\n';
        break;
    
    default:
        cout << " PICK A PROPER OP (+ - / *)";
        break;

    }



    cout << "***********************************************" ;



    return 0;

}