#include <iostream>
using namespace std;
#include <cmath> 

int input, answer; 
float current, voltage, resistance; 

int main() 
{   
    answer = 1; 
    while (answer == 1){
    cout << "Please select a component to calculate: " << "\n 1. Current" << 
    "\n 2. Voltage" << "\n 3. Resistance\n"; 
    cout << "\nType in: '1' | '2' | '3'\n";
    cin >> input;
    
    while ((input != 1) && (input != 2) && (input != 3)){
        cout << "\nPlease try again." << "\nType in: '1' | '2' | '3'\n";
        cin >> input; 
    }

    if (input == 1){ 
        cout << "\nType in the voltage (in volts): ";
        cin >> voltage; 

        cout << "\nType in the resistance (in ohms): ";
        cin >> resistance; 

        current = voltage / resistance; 

        cout << "\nYour current is: " << current << " A"; 
    }

    else if (input == 2){
        cout << "\nType in the current (in amps): ";
        cin >> current; 

        cout << "\nType in the resistance (in ohms): ";
        cin >> resistance; 

        voltage = current * resistance; 

        cout << "\nYour voltage is: " << voltage << " V"; 
    }

    else if (input == 3){
        cout << "\nType in the voltage (in volts): ";
        cin >> voltage; 

        cout << "\nType in the current (in amps): ";
        cin >> current; 

        resistance = voltage / current; 

        cout << "\nYour resistance is: " << resistance << " Ohms"; 
    }

    cout << "\nWould you like to continue? " << "\nType '1' - YES" << "\nType '0' - NO\n";
    cin >> answer; 
    }
    return 0;
}
