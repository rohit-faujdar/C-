#include <iostream>
using namespace std;
int main()
{
  char ch;
  cout<<"enter a alphabet";
  cin>>ch;
  switch (ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':cout<<"vowel"; break;
    
    default:
    cout<<"consonant";
  }
  return 0;
}