#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"reverse of array elements are = "<<"\n";
    for ( int i = 4 ; i >= 0 ; i--){
        cout<< arr[i]<<"\n";
    }
}