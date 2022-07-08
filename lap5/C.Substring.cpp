#include <iostream>

using namespace std;

int main(){ 

    string s, t;
    cin >> s >> t;

    bool res = true;

    for(int i=0; i <= s.size() - t.size(); i++){
        if(s.substr(i, t.size()) == t){
            res = true;
            break;
        }
        else res = false;
    }

    /*
    for(int i=0; i < s.size() - t.size(); i++){

        if(s.substr(i, t.size())==t){
            cout << "YES";
            return 0;
        }
        
    }
    cout << "NO";
    */

    if(res == true)cout << "YES" << endl;
    
    else cout << "NO" << endl;

    return 0;
}