#include <iostream>
using namespace std;
int main(){
    int arr[] = {54,73,93,78,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for ( int i=0 ; i<size ; i++){
        if (max < arr[i]){
             max = arr[i];
        }
    }
    cout<<"maximum element in the array is "<<max;
}