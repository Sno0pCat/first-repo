#include <iostream>
using std::cout;
using std::cin;

//type conversion = a value of one data type to antoher
//                  implicit = automatic
                //  explicit == precede value with new data type (int)

int main(){

    //double x = (int) 100;
    

    cout << (char) 100 ;

    int correct = 8;    
    int questions = 10;
    double score = correct/(double)questions * 100;

    cout << score << "%";

    /* cin input for full infomration with spaces use*/

    std::string name ;
   

    cout << "what is your full name " ;
    std::getline(cin, name);
    

    cout << "your name is : " << name;





    return 0;
}