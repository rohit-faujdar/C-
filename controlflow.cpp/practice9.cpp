#include <iostream>
using namespace std;
int main ()
{
    char ch;
    cout<<" enter any alphabet ";
    cin>>ch;
    if((int)ch>=65 && (int)ch<=90){
       cout<<"uppercase";
    }else{
        cout<<"lowercase";
    }
}