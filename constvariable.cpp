#include <iostream>
using std::cout;
using std::cin; // makes it easier to just write cin and cout w/o the std
using std::string;

namespace first{// namespace allows to store multiple values to teh same vairable 
    int x = 20;
}
namespace second {
    int x = 379;
}

int main(){
    using namespace first; 
    // so now this becomes the local output 
    int x = 0;
    const double PI = 3.14; // const name makes it stay constant
    double radius = 10; // after this declartion it cant be changed
    double circumference = 2 * PI * radius;
    string name;
    cout << "shuhaza your name?";
    cin >> name;
    cout << "asalamualikum " << name << " YA HIMAR" << '\n';



    cout << circumference << "inches" << '\n';
    cout << x << '\n'; // if not mentioned which namspace itll return the local one
    cout << second::x << '\n';
    cout << first::x << '\n';
    


    return 0;
}