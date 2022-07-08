#include <iostream>

using namespace std;

int main(){ 

    string s;
    cin >> s;

    bool res = true;

    if(s.size() == 1 || s.size() == 2){
        cout << "YES" << endl;
        return 0;
    }
    
    if(s.size() % 2 == 0){
        for(int i = 1; i < s.size()/2; i++){
            if(s[i] != s[s.size() - i - 1]){
                cout << "NO" << endl;
                return 0;

            }
            else if(s[i] == s[s.size() - i - 1]){ 
                if(s[0] != s[s.size() - 1] && s[s.size() - 1] == s[s.size() - 2]){
                    res = true;    
                }
                else{
                    cout << "NO" << endl;
                    return 0;
                }
            }
        
        }
    }
    if(s.size() % 2 != 0){
        for(int i = 1; i <= s.size()/2; i++){
            if(s[i] != s[s.size() - i]){               
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}