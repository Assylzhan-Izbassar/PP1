#include <iostream>

using namespace std;

bool Ip_address(string s){
    if(s.size() > 15)return false;
    if(s[0] == '.'){
        return false;
    }
    bool res = true;
    size_t count1 = 0;
    for(size_t i=0; i < s.size(); ++i){
        if(s[i] == '.')count1++;
    }
    if(count1 != 3)return false;
    else{
        size_t count = 0;
        for(size_t i=1; i < s.size(); ++i){
        if(s[i] != '.')count++;
        else{
            if(count > 0){
                res = true;
            }
            else{
                res = false;
                break;
            }
            count = 0;
        }
    }

    }
    if(!res)return false;
    else return true;
}

int main(){

    string s;
    cin >> s;

    if(Ip_address(s)){
        cout << '1' << endl;
    }
    else cout << '0' << endl;

    return 0;
}