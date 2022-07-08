#include <iostream>
#include <set>
#include <map>
using namespace std;

int main(){
    string s;
    cin >> s;
    set <char> se;
    int k;
    for(int i = 0; i <s.size();i++){
        se.insert(s[i]);
        if(se.size() != k) cout << s[i];
        k = se.size();
    }
    return 0;
}