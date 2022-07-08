#include <iostream>

using namespace std;

char dublicate(string s){
    char x;
    for(size_t i=0; i < s.size()-1; ++i){
        for(size_t j=i+1; j < s.size(); ++j){
            if(s[i] == s[j])x = s[i];
        }
    }
    return x;
}

int main(){

    string s;
    cin >> s;

    cout << dublicate(s) << endl;

    return 0;
}