#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> v;

    int n,m,x;
    cin >> n;

    for(size_t i=0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    cin >> m;

    for(size_t i=0; i < m; i++){
        cin >> x;
        v.push_back(x);
    }

    sort(begin(v), end(v));

    for(size_t i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    return 0;
}