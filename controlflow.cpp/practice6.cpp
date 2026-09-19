#include <iostream>
using namespace std;
int main()
{
  double a;
  cout<<"enter purchase ammount";
  cin>>a;
  double b=a*(float)0.95;
  double c=a*(float)0.9;
  double d=a*(float)0.8;
  if(a<=5000){
    cout<<a;
  }
  if(a>5000 && a<=7000){
    cout<<b;
  }
  if(a>7000 && a<=9000){
    cout<<c;
  }
  if(a>9000){
    cout<<d;
  }
  return 0;
}