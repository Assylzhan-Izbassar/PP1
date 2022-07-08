#include <iostream>

using namespace std;

void mirror(string s){
    for(size_t i=0; i < s.size(); ++i){
        cout << s[i];
    }
    for(int i=s.size()-1; i >= 0; --i){
        if(s[i] == '('){
            cout << ')';
            continue;
        }
        cout << s[i];
    }
}

int main(){

    string s;
    cin >> s;

    mirror(s);

    cout << endl;

    return 0;
}