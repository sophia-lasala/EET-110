#include <iostream>
using namespace std;

double number;

double recursion (double a){
    if (a == 1){
     return 1;
    }
    else {
     return a * recursion (a-1);
    }
}

int main()
{
    cout << "Number: ";
    cin >> number;

    recursion(number);
    cout << recursion(number);
}
