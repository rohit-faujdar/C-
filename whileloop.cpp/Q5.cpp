#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int copy = n;
    int duplicate = n;
    int c =0;
    double sum = 0;
    while(n>0){
        c++;
        n = n/10;
    }
    while(copy>0){
      int digit = copy%10;
      sum = sum + pow((double)digit,(double)c);
      copy = copy/10;
    }
    cout<<((round(sum) == duplicate ) ? "arm strong number" : "not a arm strong number");
}