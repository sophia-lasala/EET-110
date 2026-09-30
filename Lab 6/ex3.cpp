#include <iostream>
using namespace std;

int length;
int number;

int main() 
{
    cout << "How many numbers would you like to list?";
    cin >> length; 

    int array[length]; 

    cout << "\nFor the following please type in your numbers.\n";

    for (int i = 0; i < length; i++){
        cout << i+1 << ". "; 
        cin >> number; 
        array[i]=number;
    }

    for (int i = 0; i < length - 1; i++) {
        bool flag = false;
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1])
                swap(array[j], array[j + 1]);
                flag = true;

        }
        if (!flag)
            break;
    }

    cout << "\n Here is your organized list:";
    for (auto i : array){
        cout << i << " ";
    }
    return 0;
}
