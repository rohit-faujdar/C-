#include <iostream>
using namespace std;
int main(){
   int arr[] = {12,34,56,78,90};
   int n = sizeof(arr)/sizeof(arr[0]);
   int x;
   int s =0,e=n-1;
   int ans = -1;
   cout<<"enter the value of element you want to search = ";
   cin>>x;
   while(s <= e){
    int mid = (s+e)/2;
    if(arr[mid] ==x){
        ans=mid;
        break;
    }
    else if (arr[mid]<x){
        s = mid+1;
    }
    else{
        e=mid-1;
    }
   }
   cout<<ans;
}