#include <iostream>
using namespace std;
int main(){
    int arr[] = {54,73,93,78,60,68,45,80,87,525};
    int size = sizeof(arr)/sizeof(arr[0]);
    int isSorted = 1;
    for ( int i=0 ; i<size-1 ; i++){
        if (arr[i+1] < arr[i]){
         isSorted = 0;
        break ;
        }
    }   
    cout<<((isSorted == 0)? "not a sorted array " : "sorted array ") ;
    return 0;
}