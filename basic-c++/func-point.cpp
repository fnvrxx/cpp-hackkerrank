#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;
    int *ptrA = &a;
    int *ptrB = &b;
    cout <<"Disimpan pada alamat memori:"<< ptrA <<"" <<" dengan nilai:"<< *ptrA<<endl;
    cout <<"Disimpan pada alamat memori:"<< ptrB <<"" <<" dengan nilai:"<< *ptrB<<endl;
    return 0;
}