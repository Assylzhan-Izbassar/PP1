#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool com(pair<int, int> a, pair<int, int> b){
    if(a.first < b.first) return true;
    if(a.first == b.first){
        if(a.second < b.second) return true;
    }
    return false;
}

int main(){

    pair<int, int> p;

    vector<pair<int, int> > v;

    int n;
    cin >> n;

    for(int i=1; i <=n; i++){
        cin >> p.first >> p.second;
        int k = p.first + p.second;
        v.push_back(make_pair(k, i));
        k = 0;
    }

    sort(v.begin(), v.end(), com);


    for(int i=0; i < v.size(); i++){
        cout << v[i].second << " ";
    }
    
    cout << endl;

    return 0;
}