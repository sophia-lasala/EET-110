#include <iostream>
using namespace std;

int number, input = 1;
double remain; 
bool prime = true; 

int main() 
{
    while (input == 1){
        prime = true;
        cout <<"Type in number you wish to figure out is prime. ";
        cin >> number;
        if(number <= 1)
            prime = false;
        for (int i = 2; i < number; i++){
         if ((number % i == 0)){
            prime = false; 
         }
        }
    
        if (prime == true){
        cout << "Your number, " << number << " is prime.";
        }
        if (prime == false){ 
         cout << "Your number, " << number << " is NOT prime.";
        }
        cout << "\nWould you like to type in another number? TYPE: 1 - YES, 2 - NO ";
        cin >> input; 
    }
    return 0;
}
