#include <iostream>
using namespace std;
 
float current1, current2, voltage, resistance; 

int main() 
{
    cout << "Type in the resistor value (in ohms): ";
    cin >> resistance; 

    cout << "Type in the starting current value (in amps): ";
    cin >> current1;

    cout << "Type in the ending current value (in amps): ";
    cin >> current2;

    for (int i = current1; i > current2; i++){
        voltage = i * resistance; 
        cout << voltage;
    }
    
    return 0;
}
