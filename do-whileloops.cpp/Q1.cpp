#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
int main (){
    int guess;
    srand(time(0));
    int random = rand()%10 +1;
    do{
        cout<<"guess a number between 1-10 \n";
        cin>> guess ;
        if(guess >random)
             cout<<"too high \n";
        else if(guess<random)
             cout<<"too low\n";
        else
            cout << "congratulations you guess the right number \n";     
    }while(guess != random);
    return 0;
}