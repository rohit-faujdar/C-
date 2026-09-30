#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k ;
    cout<< "enter the value of how much want to shift left = ";
    cin>>k;
    for ( int i =0 ; i<k;i++){
        int temp = arr [0];

        for ( int i = 0 ; i <= n-2 ; i++){
        arr[i]=arr[i+1];
        }
    
        arr[n-1] = temp;
    }

    for (int i = 0; i<n ; i++ ){
        cout<<arr[i]<<"  ";
    }
}