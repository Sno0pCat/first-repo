#include <iostream>
using namespace::std;

int binaryconverter(int binarynumber){
    int ans= 0, pow = 1;
    int remainder;

    while(binarynumber>0){
        remainder= binarynumber%10;
        ans+=remainder * pow;
        binarynumber /=10;
        pow*=2;
    }
    return ans;
}

int main (){
    int binarynumber;
    cin >> binarynumber;

    cout << binaryconverter(binarynumber)<< endl;
    return 0;
}