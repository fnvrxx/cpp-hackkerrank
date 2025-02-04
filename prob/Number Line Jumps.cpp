#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */
 
 /*
 kanguru 1 = mulai dari lokasi x1 dan rata-rata v1 m/lompat
kanguru 2 = mulai dar lokasi x2 dan rata-rata v2 m/lompat

masalah = haru mengetahui kedua kanguru tersebut berada di lokasi dan rata-rata yang sama, jika memungkinkan maka "YES", jika tidak maka "No"

x1=2
v1=1

x2=1
v2=2

setelah lompat 1 kali, mereka bertemu pada saat
x = 3
x1 + v1 = 2+1 = 3
x2 + v2 = 1+2 = 3



int x1 = posisi
int v1 = jarak lompat

EXPLANATION 0

kanguru 1
x1 = 0 -> mulai array
v1 = 3 ->berjalannya array

kanguru 2
x2 = 4 -> mulai array
v2 = 2 ->berjalannya array
"YES"
setiap lompat memiliki jarak 2m -> kanguru 1
setiap lompa memiliki jarak 1m -> kanguru 2

EXPLANATION 1

x1 = 0
v1 = 2

x2 = 5
v2 = 3
"NO"
karena x2 > x1 dan v2 > v1, dan kanguru 1 tidak mungkin bisa mengejar kanguru 2, maka "No"]
karena bil ganjil bertemu dengan bilangan ganjil tidak pernah bertemu

#METDOE BIASA

 */

string kangaroo(int x1, int v1, int x2, int v2) {
    //rumus (x2-x1) % (v1-v2) == 0
    string str = "NO";
    if(v1 <= v2){
        return "NO";
    };
     if(((x2-x1) % (v1-v2)) == 0){
        return "YES";
    }
    return str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int x1 = stoi(first_multiple_input[0]);

    int v1 = stoi(first_multiple_input[1]);

    int x2 = stoi(first_multiple_input[2]);

    int v2 = stoi(first_multiple_input[3]);

    string result = kangaroo(x1, v1, x2, v2);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
