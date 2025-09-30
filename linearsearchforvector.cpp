#include <iostream>
using namespace::std;
#include <vector>

int linearsearch(const vector<int>& vect, int target){
for(int i:vect){
    if(target == vect[i]){
        return i;
    }
}
return -1;
}

int main(){

    int target;
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    int answer =0;


    cout << " ENTER UR TARGERT VALUE";
    cin >> target;
    answer= linearsearch(vec, target);

    if(answer != -1){
    cout << "UR ANSWER WAS FOUND AT INDEX " << answer << ": " << target;
    }else{
        cout << "UR ANSWER WAS NOT FOUND";
    }


    return 0;



}