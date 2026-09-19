#include <iostream>
using namespace std;
int main ()
{
    int N;
    cout<<"enter number";
    cin>>N;
    int factorial=1;
    for(int i = 1;i<=N;i++){
        factorial = (factorial*i);
    }
    cout<<factorial;
    return 0;
}