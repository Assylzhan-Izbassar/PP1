#include <iostream>

using namespace std;

char MAX_digit(string s){
    char maxi = s[0];

    for(size_t i=0; i < s.size(); ++i){
        if(s[i] > maxi){
            maxi = s[i];
        }
    }
    return maxi;
}

int main(){

    string s;
    cin >> s;

    cout << MAX_digit(s) << endl;
    return 0;
}