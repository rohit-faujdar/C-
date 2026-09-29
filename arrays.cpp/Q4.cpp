#include <iostream>
using namespace std;
int main(){
    int arr[] = {54,73,93,78,60,68,45,80,87,525};
    int size = sizeof(arr)/sizeof(arr[0]);
    int even = 0;
    int odd = 0;
    for ( int i=0 ; i<size ; i++){
        if (arr[i]%2 == 0){
             even++ ;
        }
        else {
            odd++ ;
        }
    }
    cout << "total number of odd elements are "<<odd<<"\n"<<"total number of even elements are "<<even;
    return 0;
}