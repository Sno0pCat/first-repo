#include <iostream>
using namespace::std;

int main(){
    int index;
    int num[] = {20,1,2,5,-1};
    //int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    cout << sizeof(num)/sizeof(int);
    for(int i = 0; i <sizeof(num)/sizeof(int); i ++){
        smallest = min(num[i],smallest);
        if(smallest == num[i]){
            index = i;
        }
    }
    
    cout << "UR SMALLEST NUMBER IS " << smallest << endl;
    cout << "UR INDEX IS " << index;

   // for(int i = 0; i<size; i++){
       // if(num[i]<smallest){
       //     smallest = num[i]; 
       // }
       


   // }
   // cout << " the smallest number is " << smallest;
return 0;

}