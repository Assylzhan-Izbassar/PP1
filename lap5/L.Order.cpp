#include <iostream>

using namespace std;

int main(){
     
    string s;
    cin >> s;

    bool res = true;

    for(int i=0; i < s.size(); i++){
        if(i == s.size() - 1){
            if(s[i-1] <= s[i]){
                res = true;
                break;
            }
        }
        if(s[i] > s[i+1]){
            res = false;
            break;
        }
        else res = true;
    }

    if(res == false){
        cout << "NO" << endl;
    }
    else cout << "YES" << endl;

    return 0;
}