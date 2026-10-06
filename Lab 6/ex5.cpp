#include <iostream>
using namespace std;

double number, power; 

double recursion (double a, double n){
    if (n == 0){
     return 1;
    }
    else {
     return a * recursion (a, n-1);
    }
}

int main() 
{
    cout << "Number: ";
    cin >> number;
    cout << "Power: ";
    cin >> power;

    recursion(number, power);
    cout << recursion(number, power);
}
