#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    string res = "";

    for(int i=0; i < s.size(); i++){
        for(int j=i+1; j < s.size(); j++){
            if(s[i]==s[j]){
                s[j]='@';
            }
        }
    }
    for(int i=0; i < s.size(); i++){
        if(s[i] != '@'){
            res = res + s[i];
        }
    }

    cout << res << endl;

    return 0;
}