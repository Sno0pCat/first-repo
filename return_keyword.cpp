#include <iostream>
using namespace::std;




int birthyearcalc(int num1, int num2);

int main(){

    int age , year ;

    
    cout << "how old are you\n";
    cin >> age;
    cout << "what year is it rn \n";
    cin >> year;
    int birthyear = birthyearcalc(age, year);
    cout << "YOU WERE BORN IN : " << birthyear;
}
int birthyearcalc (int num1, int num2){
    return num2 - num1;

}

/*string connectname(string string1, string string2);



int main(){

    string firstname;
    string lastname;
    cout << "WAHT IS UR FIRST NAME\n" ;
    cin >> firstname;
    cout << "WAHT IS UR last NAME\n" ;
    cin >> lastname;
    string fullname = connectname(firstname, lastname);

    cout << fullname;
   

    
}

string connectname(string string1, string string2){
    return string1 + " " + string2 ;
}*/