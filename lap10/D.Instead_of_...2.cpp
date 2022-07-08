#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    int n, m;
    cin >> n >> m;

    int x;

    for(int i=0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    rotate(v.begin(), v.begin() + m, v.end());

    reverse(v.begin(), v.end());

    for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}