// varaibels and data types

#include <iostream>

int main(){
    // int (whole number)
    int age = 67;
    int year = 2004;

    // for decimals = double(number inlcuding decimal)
    double price = 10.99;
    double gpa = 3.98;
    double temperature = 25.1;


    int x; // declaration
    x = 5; //asginemnt or you can do this in one set like the next line
    int y = 6;
    int sum = x + y;

    //single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    //boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    //string ( represents sequences of text)
    std::string name = "NADIM";
    std::string day = "wednesday";
    std::string food = "pizza";
    std::string address = "123 fuller st";

    std::cout << x << '\n'; 
    std::cout << y <<'\n';
    std::cout << sum << '\n';
    std::cout << "You are " << age << " years old!" <<'\n'; 
    std::cout << temperature <<'\n';
    std::cout << grade << '\n';
    std::cout << "Hello! Mr. " << name;
    return 0;
}