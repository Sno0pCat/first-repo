#include <iostream>
using namespace::std;

int sumofarray(int arr[], int size, int sum){
    for(int i = 0 ; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int sum =0;
    int arr[] = {1,2,3,4};
    int size = 4;

    sum = sumofarray(arr, size, sum);

    cout << "THE SUM IS " << sum;

    return 0;
}