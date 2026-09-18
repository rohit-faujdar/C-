#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout << "enter three numbers";
    cin >> a >> b >> c;
    double avg = ((double)a+b+c)/3;
    cout << "average =" <<avg << "\n";
    return 0;
}