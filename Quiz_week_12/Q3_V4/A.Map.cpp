#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){

    map<string, int> m;

    int n;
    cin >> n;

    string s;
    int x;

    for(int i=0; i < n; i++){
        cin >> s >> x;
        m[s]++;
    }

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); it++){
        if((*it).second >= 2){
            cout << (*it).first << endl;
        }
    }

    return 0;
}