#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    for(size_t i=0; i < s.size() - 1; i++){
        if(s[i] == s[i+1])continue;
        if(s[i] != char(int(s[i+1]) - 1)){
            cout << "NO" << "\n";
            exit(0);
        }
    }

    cout << "YES" << "\n";

    return 0;
}