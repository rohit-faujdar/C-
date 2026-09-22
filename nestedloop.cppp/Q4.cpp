#include <iostream>
using namespace std;
int main (){
    int n=5;
    for( int i =1; i <=5; i++){
        for(int j = n-i ; j>=1;j--){
            cout<<"_ ";
        }
        for(int k =1;k<=i;k++){
            cout<<"# ";
        }
        cout<<"\n";
    }
}