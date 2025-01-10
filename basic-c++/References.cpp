/*
A reference is an alias for an existing variable, meaning it’s a different name for the same memory location. Unlike pointers, references cannot be null, and they must be initialized when they are declared. Once a reference is initialized, it cannot be changed to refer to another variable.

Here’s a general format to declare a reference:
dataType &referenceName = existingVariable;

int sum = 10;
int &ref = sum;

*/
#include <iostream>
using namespace std;

int main(){
    int sum = 10;
    int &ref = sum;
    cout << "Value of sum: " << sum << endl;
}