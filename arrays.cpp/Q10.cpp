//count subarrays whoose sum equal to x.(choose any array )
#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int c=0,sum=0;
    int x;
    cout<< " enter the value 0f x = ";
    cin>>x;
    for ( int i =0 ; i<n ; i++){
        sum = 0;
        for (int j = i; j<n ; j++){
            sum += arr [j];
            if(sum == x){
                c++;
            }    
        }
    }
    
    cout<<c;
    return 0;
}