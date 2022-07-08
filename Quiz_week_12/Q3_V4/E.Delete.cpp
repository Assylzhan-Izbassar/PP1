#include <iostream>
#include <set>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    set<char> set;
    int k;

    for(int i=0; i < s.size(); i++){
        
        set.insert(s[i]);
        
        if(set.size() != k) cout << s[i];
        
        k = set.size();
    }

    return 0;
}