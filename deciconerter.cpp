#include <iostream>
using namespace::std;

int deciconverter(int n){
    int remainder;
    int ans =0;
    int pow=1;

    for(int i =n; i>0; i--){
        remainder=n%2;
        n=n/2;
        ans+=remainder * pow;
        pow = pow *10;

        
    }
    return ans;
}


int main(){

int n;
cin >> n;
cout << deciconverter(n);
//for(int i=0; i<10; i++){
 //   cout << deciconverter(i)<<endl;
//}


return 0;
}