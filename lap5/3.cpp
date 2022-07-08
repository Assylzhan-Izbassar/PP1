#include <iostream>

using namespace std;

string str(string s, int x){
    int cnt =0;
    for(int i=0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            cnt++;
        }
    }
    if(cnt >= x) return "Yes";
    else return "No";
}


int main(){
    string s;
    cin >> s;
    int x;
    cin >> x;

    cout <<str(s,x); 


    return 0;
}