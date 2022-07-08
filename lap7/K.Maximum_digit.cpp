#include <iostream>

using namespace std;

char Max_digit(string s, char c, int i){
    if(i == s.size())return c;
    if(s[i] > c){
        return Max_digit(s,s[i],i+1);
    }
    else{
        return Max_digit(s,c,i+1);
    }
}

int main(){

    string s;
    cin >> s;

    cout << Max_digit(s, '0', 0) << endl;

    return 0;
}