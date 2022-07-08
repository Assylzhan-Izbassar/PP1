#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    int n;
    cin >> n;

    string s;
    int x;

    for(int i=0; i < n; i++){
        cin >> s >> x;

        if(m.find(s) != m.end()){
            m[s] = m[s] + x;
        }
        else m[s] = x;
    }

    map<string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << "\n";
    }

    return 0;
}