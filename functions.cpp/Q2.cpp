#include <iostream>
using namespace std;

void factor(int a);//function declaration

//function call 
int main (){
    factor(20);
    return 0;
}


//function definition
void factor(int a){
   for( int i=1; i <= a; i++ ){
    if(a%i == 0){cout<<i<<"\n";}
   }
}