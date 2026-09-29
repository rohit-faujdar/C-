#include <iostream>
using namespace std;

void IsPrime(int a);//function declaration

//function call 
int main (){
    int a ;
    cout<<"enter a number   ";
    cin>>a;
    IsPrime(a);
    return 0;
}


//function definition
void IsPrime(int a){
    int c = 0;
   for( int i=1; i <= a; i++ ){
    if(a%i == 0){ c++ ;}
   }
   cout<<((c == 2)? "prime number " : "not a prime number ")<<"\n";
}