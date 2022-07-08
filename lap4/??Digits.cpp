#include <iostream>

using namespace std;

int main(){ 
    
    string s;
    cin >> s;
    int cnt1 =0;
    int cnt2 = 0;
    for(int i=1; i < s.size(); i++){
        if(s[0] == s[i]){
            cnt1++;
            s[i] = -1;
        }
    }

    for(int i=1; i < s.size(); i++){
        if(s[i] != -1){
            for(int j = i+1; j < s.size(); j++){
                if(s[i] == s[j]){
                    cnt2++;
                    s[j] = -1;
                }
            }
            if(cnt2!=cnt1){
                cout << "No";
                return 0;
            }
            cnt2 = 0;
        }
        
    }

    cout << "Yes";
    return 0;
}