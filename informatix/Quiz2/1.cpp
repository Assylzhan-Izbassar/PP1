#include <iostream>
#include <set>
#include <map>
using namespace std;
void rec(int n){
    if(n!=0){
        rec(n/10);
        cout << n%10<<" ";
    }
}
void up(string s,int i){
    if(i == s.size()){
        cout << -1;
        return;
    }
    else{
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << s[i];
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