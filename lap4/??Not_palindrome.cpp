#include <iostream>
#include <algorithm>

using namespace std;

int main(){ 

    string s;
    cin >> s;
    
    int cnt=0;
    int cnt1 =0;

    for(int i=0; i < s.size(); i++){
        if(s[0] != s[s.size()-1-i])
            cnt++;
    }

    for(int i=0; i < s.size(); i++){
        if(s[i] != s[s.size()-1]) 
        cnt1++;

    }

    if(cnt > 1 || cnt1 > 1)cout << "no";
    else 

    return 0;
}