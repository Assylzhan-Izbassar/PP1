#include <iostream>

using namespace std;

bool polin(string s, int i){
    if(i == s.size()/2)return true;
    if(s[i] == s[s.size() - i - 1]){   
        return polin(s, i+1);
    }
    else return false;
}

int main(){

    string s;
    cin >> s;

    if(polin(s,0))cout << "yes\n";
    else cout << "no\n";

    return 0;
}