#include <iostream>
#include <map>

using namespace std;

int main(){

    int n;
    cin >> n;

    string s;
    int x;

    map<string, int> m;

    for(int i=1; i <= n; i++){
        cin >> s >> x;
        if(m.find(s) != m.end()){
            m[s] = m[s] + x;
        }
        else m[s] = x;

    }

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }


    return 0;
}