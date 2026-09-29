#include <iostream>
using namespace std;

void swap(int a, int b);//function declaration

//function call 
int main (){
    swap(10,20);
    return 0;
}


//function definition
void swap(int a, int b){
  int temp = a;
  a=b;
  b=temp; 
  cout<< "a= "<<a<<"\n"<<"b= "<<b;
}