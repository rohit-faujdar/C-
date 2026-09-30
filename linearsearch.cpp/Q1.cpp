#include <iostream>
using namespace std;
int main(){
   int arr[] = {1,2,3,4,5};
   int n = sizeof(arr)/sizeof(arr[0]);
   int x;
   int ans = -1;
   cout<<"enter the value of element you want to search = ";
   cin>>x;
   for( int i = 0 ; i<n;i++){
    if(arr[i] == x){
        ans=i;
        break;
    }
    
   }
   cout<<ans;
}