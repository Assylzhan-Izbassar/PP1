#include <iostream>

using namespace std;

string for_all(string s){
    string res = "";
    for(size_t i=0; i < s.size(); ++i){
        if(s[i] != ' ')res += s[i];
        else continue;
    }
    return res;
}

bool isPalindrom(string k){
    for(size_t i=0; i < k.size(); ++i){
        if(k[i] != k[k.size()-i-1])return false;
    }
    return true;
}

int main(){

    string s;
    getline(cin, s);

    string r = for_all(s);

    if(isPalindrom(r)){
        cout << "yes\n"; 
    }
    else cout << "no\n";

    return 0;
}