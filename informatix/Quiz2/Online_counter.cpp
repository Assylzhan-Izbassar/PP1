#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string,int> m;
    string s;

    int k;

    m.insert(make_pair(s,k));

    while(cin >> s){
        if(m[s] == 0)cout << "0" << " ";
        else cout << "1" << " ";
        m[s]++;
    }

    return 0;
}