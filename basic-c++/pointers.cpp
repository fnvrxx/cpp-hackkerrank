/*
 *A pointer is a variable that stores the memory address of another variable (or function). It points to the location of the variable in memory, and it allows you to access or modify the value indirectly. Here’s a general format to declare a pointer:
 * dataType *pointerName;*/

#include <iostream>
using namespace std;

//function pointer
int add(int a, int b){
  return a + b;
}

int main(){
  int num = 10;
  int *ptr = &num;
  int value = *ptr; //accessing the value of num using the pointer
  cout << "Address of num: " << ptr << endl;//ACCESSING THE ADDRESS OF num
  cout << "Value of num: " << value << endl;
  int (*funcptr)(int, int) = add;
  cout << "Sum: " << funcptr(2, 3) << endl;
  return 0;

}
