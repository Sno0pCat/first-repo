#include <iostream>
using std::cout;
using std::cin;
/*typdef = reserved keyword used to create an additional name (alias) for another data type
new identidier for an existing type, helps with readibilty and reduces typos*/
#include <vector>

//typedef std::vector<std::pair<std::string, int >> parilist_t;
//typedef std::string text_t;
//typedef int number_t;
 using text_t = std::string;
 using number_t = int;
 typedef float speed;


int main (){

    text_t firstname = "bob";
    number_t year = 290;

    cout << firstname << '\n';
    cout << year << '\n';

    return 0;
}
