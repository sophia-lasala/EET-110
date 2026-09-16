#include <iostream>
using namespace std;

int main () { 
    int hours, rate, overtime, pay, opay, total;

    cout << "How many hours of work? ";
    cin >> hours; 

    cout << "\nWhat is the rate per hour? ";
    cin >> rate;

    if (hours > 40){
        overtime = hours - 40; 
        pay = 40 * rate; 
        opay = overtime * 2 * rate;
        total = opay + pay;
    }
    else{
        total = hours * rate; 
    }

    cout << "\nThe total is: " << total;

    return 0;
}
