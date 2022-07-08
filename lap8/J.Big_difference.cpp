#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){ 

    vector<int> v;

    int x;

    int n;
    cin >> n;

    for(int i=0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int k;

    for(int i=0; i < n; i++){
        k = v[v.size()-1] - v[0]; 
    }

    cout << k << endl;

    return 0;
}