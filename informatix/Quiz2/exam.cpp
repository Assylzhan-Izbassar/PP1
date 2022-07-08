#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main(){

    string s;
    map<char,int> m;
    //getline(cin, s);
    //stringstream ss;
    //ss<<s;
    while(cin>>s){
        if(s[0] >= 'A' && s[0] <= 'Z') s[0] = s[0] +32;
        m[s[0]]++;
    }
    for(int i = 'a'; i<= 'z'; i++){
        cout << m[char(i)]<<endl;
    }
    return 0;
}
