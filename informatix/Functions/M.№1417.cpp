#include <iostream>

using namespace std;

void swap_chars(string s, size_t a, size_t b){
    for(size_t i=0; i < s.size(); ++i){
        for(size_t j = a; j <= b; ++j){
            if(i+1 == a){
                swap(s[a-1],s[b-1]);
                a++;--b;
            }
        }
    }
    cout << s << endl;
}

int main(){

    string s;
    size_t a,b;

    cin >> s >> a >> b;

    swap_chars(s,a,b);

    return 0;
}