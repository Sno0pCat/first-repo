#include <iostream>
using namespace::std;

int main(){

    int guess,number,tries;
    tries = 0;

    srand(time(NULL));
    number = (rand()% 100 ) +1;
    

    cout << "********NUMBER GUESSER**********"<< '\n';
   

    do{
        cout << "TRY TO GUESS THE NUMBER BETWEEN 1-100;" << '\n';
    cin >> guess;
    tries++;

        if(guess < number){
            cout << " TOO LOW"<< '\n';
        
        }
        else if (guess > number){
            cout << "toO High"<< '\n';
        
        }
        else {
            cout << "you guessed it "<< '\n';
            cout << "IT TOOK U " << tries << " FOR U TO GUESS " << number;
        
        }
    }while (guess != number);
   
    

    return 0;
}