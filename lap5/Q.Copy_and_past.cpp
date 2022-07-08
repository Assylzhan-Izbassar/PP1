#include <iostream>

using namespace std;

int main(){
     
    string s, t;
    cin >> s >> t;

    if(t.size() % s.size() != 0){
        cout << "NO" << endl;
        return 0;
    }

    bool res = true;
    
    for(int i=0; i < t.size(); i = i + s.size()){
        if(t.substr(i, s.size()) != s){
            res = false;
        }
    }

    if(res == true){
        cout << "YES";
    }
    else cout << "NO";

    cout << endl;
    
    return 0;
}