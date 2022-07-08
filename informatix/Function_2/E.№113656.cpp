#include <iostream>

using namespace std;

void insert_to_string_even(string s){
    for(size_t i=0; i <s.size()/2; ++i){ 
        if(i == 0){
            cout << s[0];
            continue;
        }
        cout <<'(' << s[i];
    }
    for(size_t i=s.size()/2; i < s.size(); ++i){ 
        if(i == s.size() - 1){
            cout << s[i];
            break;
        }
        cout << s[i] << ')';
    }
}

void insert_to_string_odd(string s){
    for(size_t i=0; i < s.size()/2; ++i){ 
        if(i == 0){
            cout << s[0] << '(';
            continue;
        }
        cout << s[i] << '(';
    }
    for(size_t i=s.size()/2; i < s.size(); ++i){ 
        if(i == s.size() - 1){
            cout << s[i];
            break;
        }
        cout << s[i] << ')';
    }
}

int main(){

    string s;
    cin >> s;

    if(s.size() % 2 != 0)insert_to_string_odd(s);
    else insert_to_string_even(s);
    cout << endl;

    return 0;
}