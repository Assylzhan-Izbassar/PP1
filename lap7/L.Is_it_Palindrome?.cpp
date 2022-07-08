#include <iostream>

using namespace std;

bool is_it_palin(string s, int i){
    if(i == s.size())return true;
    if(s[i] == s[s.size()-i-1]){
        return is_it_palin(s,i+1);
    }
    else return false;
}

int main(){

    string s;
    cin >> s;

    if(is_it_palin(s,0))cout << "Yes\n";
    else cout << "No\n";

    return 0;
}