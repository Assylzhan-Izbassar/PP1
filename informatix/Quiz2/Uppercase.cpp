#include <iostream>

using namespace std;

void up(string s,int i){
    if(i == s.size()){
        cout << -1;
        return;
    }
    else{
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << s[i] << endl;
            return;
        }
        else up(s,i+1);
    }
}

int main(){

    string s;
    
    cin >> s;
    
    up(s,0);

    return 0;
}