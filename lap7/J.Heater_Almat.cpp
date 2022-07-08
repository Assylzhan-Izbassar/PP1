#include <iostream>

using namespace std;

int Heater_Almat(string s, int k, int i){
    if(i == s.size())return k;
    else{
        k += (s[i] - '0')/2;
        return Heater_Almat(s, k, i+1);
    }
}

int main(){

    string s;
    cin >> s;

    cout << Heater_Almat(s, 0, 0) << endl;

    return 0;
}