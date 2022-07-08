#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    int n;
    cin >> n;

    string s;

    for(int i=0; i < n; i++){
        cin >> s;
        m[s]++;
    }

    map<string, int>:: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << "\n";
    }

    return 0;
}