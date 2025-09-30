// data type name of array [] = {}
// sizeof() can be used to determine the size of an array for ex:

#include <iostream>
using namespace::std;

int main(){
string pets[] = {"cat","dog","mouse","snake"};

for(int i = 0; i<sizeof(pets)/sizeof(string); i++){
    cout << pets[i] << '\n';
}
return 0;

}