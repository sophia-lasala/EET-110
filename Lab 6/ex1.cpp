#include <iostream>
using namespace std;

int a[10];
int n = 0, r = 0;
int i;

int main() 
{
    cout << "\nWhat decimal number would you like to convert to binary? ";
    cin >> n; 
    
    while (n>=1){
        r = n%2;
        n = n-r;
        n = n/2;
        a[i] = r;
        i++;
    }

    cout << "\n Your binary number is: \n";
    
    while (i >= 0){
        cout << a[i];
        i--;
    }

}
