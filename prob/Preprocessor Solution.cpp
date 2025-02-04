#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define foreach(list, index) for(int index=0; index < list.size();index++)
#define toStr(str) #str
#define io(input) cin >> input
#define FUNCTION(name, op) void name(int &a, int b) {if(!(a op b)) a = b;}
#define INF 10000000
/*-----------------------------------------*/

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif

FUNCTION(minimum, <)
FUNCTION(maksimum, >)

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    //first find min and max
    //if + - - then + +, if - - - then - +.
    //first input size array
    //second input describing the elements in the array
    int n;cin >> n;
    
    vector<int> arr(n);
    
    foreach(arr, i){
        io(arr)[i];
    }
    
    int min = INF;
    int mx = -INF;
    
    foreach(arr, i){
        minimum(min, arr[i]);
        maksimum(mx, arr[i]);
    }
    
    int solusi = mx - min;
    cout << toStr(Result = )<< ' ' << solusi;
    
    
    return 0;
}
