#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
class mytemplate{
    T elemen1;
    public:
    mytemplate(T angka) : elemen1(angka){}
    T add (T elemen2){
        return elemen1 + elemen2;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int input;//banyak input
    cin >> input;
    for(int i = 0; i <= input; i++ ){
        string type;
        cin >> type;
        
        if(type == "string"){
            string el1,el2;
            cin >> el1 >> el2;
            mytemplate<string>mt1(el1);
            cout << mt1.add(el2) << "\n";
        }
        else if (type == "int"){
            int el1,el2;
            cin >> el1 >> el2;
            mytemplate<int>mt2(el1);
            cout << mt2.add(el2) << "\n";
        }
        else if (type == "float"){
            float el1,el2;
            cin >> el1 >> el2;
            mytemplate<float>mt3(el1);
            cout << mt3.add(el2);
        }
    }
    return 0;
}
