#include <iostream>

using namespace std;

int main(){ 

    string s;
    cin >> s;

    bool res = true;

    for(size_t i=0; i < s.size()/2; i++){
        if(s[i] != s[s.size()-i-1]){
            res = false;
            break;
        }
    }

    /*for(size_t i=0; i < s.size()/2; i++){
        if(s[i] != s[s.size()-i-1]){
           cout << "NO" << "\n";
           return 0;
        }
    }*/

    if(res == true) cout << "YES";
    else cout << "NO";

    cout << endl;

    return 0;
}