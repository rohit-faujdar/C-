#include <iostream>
using namespace std;
int main ()
{
    int N;
    cout<<"enter number";
    cin>>N;
    for(int i = 1;i<=N;i++){
        if(N%i == 0){
            cout<<i<<"\n";
        }
    }
    return 0;
}