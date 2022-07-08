#include <iostream>

using namespace std;

bool isPalindrom(string k){
    for(size_t i=0; i < k.size(); ++i){
        if(k[i] != k[k.size()-i-1])return false;
    }
    return true;
}

int main(){

    string s;
    cin >> s;

    if(isPalindrom(s)){
        cout << "yes\n"; 
    }
    else cout << "no\n";

    return 0;
}