#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){

    map<string, string> m;
    vector<string> v;
    
    int n;
    cin >> n;

    int k;

    string s;
    string t;

    for(int i=0; i < n; i++){
        cin >> s >> k;
        for(int j=0; j < k; j++){
            cin >> t;
            m[t] = s;
        }
    }

    int c;
    cin >> c;

    string q;

    for(int i=0; i < c; i++){
        cin >> q;
        v.push_back(m[q]);
    }

    cout << v.size() << endl;

    for(int i=0; i < v.size(); i++){
        if(v[i] != ""){
            cout << v[i] << endl;
        }
        else cout << "Unknown" << endl;
    }

    return 0;
}