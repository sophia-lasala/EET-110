#include <iostream>
using namespace std;
#include <cmath> 

const double PI = 3.141592653589793238463;

double real, imaginary, magnitude, angle; 

int main(){
    cout << "Input real value (a): ";
    cin >> real;

    cout << "\nInput imaginary value (b): ";
    cin >> imaginary;    

    cout << "\nYour number is: " << real << " + j" << imaginary;

    magnitude = sqrt(pow(real, 2) + pow(imaginary, 2));
    angle = atan(imaginary/real) * (180/PI) ;

    cout << "\nYour magnitude is: " << magnitude;
    cout << "\nYour angle is: " << angle;

    return 0;
}
