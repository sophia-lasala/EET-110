#include <iostream>
using namespace std;

int a[10];
int n = 0, r = 0;
int i;

int main() 
{
    cout << "\nWhat decimal number would you like to convert to hexadecimal? ";
    cin >> n; 
    
    while (n>=1){
        r = n%16;
        n = n-r;
        n = n/16;
        if (r == 10){
          a[i] = "A";
        }
        else if (r== 11){
          a[i] = "B";
        }
        else if (r == 12){
          a[i] = "C";
        }
        else if(r == 13){
          a[i] = "D";
        }
        else if (r == 14){
          a[i] = "E";
        }
        else if (r== 15){
          a[i] = "F";
        }
        else{
        a[i] = r;
        }
        i++;
    }

    cout << "\n Your hex number is: \n";
    
    while (i >= 0){
        cout << a[i];
        i--;
    }

}
