#include <iostream>
using namespace std;
#include <cmath> 

const double PI = 3.141592653589793238463;

int input; 
float area, length, width, radius; 

int main() 
{   
    cout << "Please select a shape for area calculation: " << "\n 1. Circle" << 
    "\n 2. Rectangle" << "\n 3. Square\n"; 
    cout << "\nType in: '1' | '2' | '3'\n";
    cin >> input;
    
    
    while ((input != 1) && (input != 2) && (input != 3)){
        cout << "\nPlease try again." << "\nType in: '1' | '2' | '3'\n";
        cin >> input; 
    }

    if (input == 1){ 
        cout << "\nType in the radius (in inches): ";
        cin >> radius; 

        area = PI * pow(radius, 2); 
    }

    else if (input == 2){
        cout << "\nType in the length (in inches): "; 
        cin >> length;

        cout << "\nType in the width (in inches): ";
        cin >> width;

        area = length * width; 
    }

    else if (input == 3){
        cout << "\nType in the length (in inches): ";
        cin >> length;

        area = pow(length, 2);
    }

    cout << "\nYour area is: " << area << " in^2"; 

    return 0;
}
