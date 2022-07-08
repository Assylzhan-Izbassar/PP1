#include <iostream>

using namespace std;

string Capital_Even(string s){
    //string res = "";
    for(size_t i=0; i < s.size(); ++i){
        if(i % 2 == 0){
            s[i] = toupper(s[i]);
        }
        //res += s[i];
    }
    //return res;
    return s;
}

int main(){

    string s;
    cin >> s;

    cout << Capital_Even(s) << endl;

    return 0;
}