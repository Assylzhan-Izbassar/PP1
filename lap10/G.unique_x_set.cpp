#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){

    set<int> s;
    vector<int> v, v1, v2;

    int n;
    cin >> n;

    int x;

    for(int i=0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    vector<int> :: iterator it, it1;
    it1 = unique(v.begin(), v.end());

    for(it = v.begin(); it != it1; it++){
        s.insert(*it);
        v1.push_back(*it);
    }

    set<int>:: iterator it2;
    for(it2 = s.begin(); it2 != s.end(); it2++){
        v2.push_back(*it2);
    }

    for(int i=0; i < v1.size(); i++){
        int k = v1[i] * v2[i];
        cout << v2[i] << " x "  << v1[i] << " = "<< k << endl;
    }

    return 0;
}