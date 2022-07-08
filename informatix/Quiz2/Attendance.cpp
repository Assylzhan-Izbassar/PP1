#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;
    map<string, int>::iterator it;

    int n;
    cin >> n;

    string s;

    for(int i=0; i < n; i++){
        cin >> s;
        m[s]++;
    }

    int k;
    cin >> k;

    string t;

    for(int i=0; i < k; i++){
        cin >> t;
        for(it = m.begin(); it != m.end(); it++){
            if(t == (*it).first){
                cout << (*it).first << endl;
            }
        }
    }

    return 0;
}