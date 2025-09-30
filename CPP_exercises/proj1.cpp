// Calculate the hyppotneus for right angle triangle

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

int main ()
{
    double a;
    double b;
    double c; 
    double d;// hypotneuse
    
    cout << "What is side a: ";
    cin >> a;

    cout << "What is side b: ";
    cin >> b;


    //a = pow(a,2);
   // 4b = pow(b,2);
   // c = a+b;
    d = sqrt( pow(a,2) + pow(b,2) );

    cout << "Hypotneuse is: " << d << '\n';






    return 0;
}