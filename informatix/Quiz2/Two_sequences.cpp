#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){

    vector<int> v , v1;
    set<int> s;

    map<int,bool> m;
    int n;
    cin >> n;

    int x;

    while(cin >> x){
        if(x == 0)break;
        v.push_back(x);
        m[x] = true;
    }

    int y;

    while(cin >> y){
        if(y == 0)break;
        v1.push_back(y);
        m[y] = true;
    }
    
    for(int i=0; i < v.size(); i++){
        for(int j=0; j < v1.size(); j++){
            if(v[i] == v1[j]){
                s.insert(v[i]);
            }
        }
    }

    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    for(int i = 1;i <= n; i++){
        if(m[i] == false) cout << i << " ";
    }

    cout << endl;

    return 0;
}