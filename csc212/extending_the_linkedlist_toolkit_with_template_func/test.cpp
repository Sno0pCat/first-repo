#include <cctype>     // Provides toupper
#include <iostream>   // Provides cout and cin
#include <cstdlib>    // Provides EXIT_SUCCESS and size_t
#include "newnode2.h"   // With node::valuetype defined as double
using namespace std;
using namespace csc212_proj2;

int main(){
    node<double>* L1 = NULL;
    node<int>* L2 = NULL;
    node<int>* L3 = NULL;

    list_tail_attach(L1,0.5);
    list_tail_attach(L1,0.2);
    list_tail_attach(L1,0.1);
    list_tail_attach(L1,0.8);
    list_tail_attach(L1,1.0);
    list_tail_attach(L1,3.5);
    
    cout << "L1 length after the attach is called " << list_length(L1) << "\n"; // needs to be 6

    list_head_remove(L1);
    list_tail_remove(L1);

    cout << "L1 length after the removal of head and tail is called is " << list_length(L1) << "\n"; // needs to be 4

    list_head_insert(L2,3);
    list_head_insert(L2,2);
    list_head_insert(L2,5);
    list_head_insert(L2,2);
    list_head_insert(L2,4);
    list_head_insert(L2,2);

    cout << "# of 2s in L2 is " << list_occurrences(L2,2) << "\n";// should be 3, since 3 2s in L2

    if(list_length(L2) < 4){
        cout << "List is too short";
        return EXIT_FAILURE; 
    }
    L3 = list_copy_front(L2,4); // copies first 4 of L2
    cout << "l3 length after list_copy_front is called is " << list_length(L3) << "\n"; // 4

    if(list_length(L1) != list_length(L3)){
        cout << "Lengths are mismatched";
        return EXIT_FAILURE;
    }
    double total = 0;
    const node<double>* p1 = L1;
    const node<int>* p3 = L3;
    while (p1 != NULL && p3 != NULL){
        double a = p1->data();
        double b = static_cast<double>(p3->data());
        total += a*b;
        p1 = p1->link();
        p3 = p3->link();
    }
    cout << "The sum of products of the L1 and L3 is " << total << "\n"; // 7.4

    return EXIT_SUCCESS;
}
