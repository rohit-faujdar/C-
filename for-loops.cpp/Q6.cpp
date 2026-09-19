#include <iostream>
using namespace std;
int main ()
{
    int N;
    cout<<"enter number";
    cin>>N;
    int c=0;
    for(int i = 1;i<=N;i++){
       if(N%i == 0) {
        c++;
       }
    }
    cout << ((c == 2) ? "prime number" : "not a prime number");
    return 0;
}