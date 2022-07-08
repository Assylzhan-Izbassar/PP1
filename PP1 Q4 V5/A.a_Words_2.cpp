#include<iostream>
#include<map>

using namespace std;

map<char,int> m;

int main(){
    
    string s;
    
    while(cin >> s){
        if(s[0] == 'a'){
            m[s[0]]++;
        }
    }
    
    cout << m['a'] << endl;
    
    return 0;
}