#include <iostream>
using namespace::std;

int linearsearch(int arr[], int size, int target){
    for(int i = 0; i<size; i++ ){
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int target = 9;
    int size = 6;
    int arr [] = {1,23,1223,9,01,22};

    cout << linearsearch(arr, size, target);
    return 0;


}


/*int main(){
    int arr[] = {3,4,5,6,1,2,3,20};
    int target, index;
    cout << "WHAT IS UR TARGET NUMER?";
    cin >> target;

    for (int i = 0; i <sizeof(arr)/sizeof(int); i++)
    {
        if (target == arr[i]){
            cout << "THE INDEX IS AT " << i;
}
}
return -1;
}

*/