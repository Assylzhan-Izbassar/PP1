#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){ 

    vector<string> v;
    vector<int> v1;

    int n;
    cin >> n;

    string s;
    int x;

    for(int i=0; i < n; i++){
        cin >> s >> x;
        v.push_back(s);
        v1.push_back(x);
    }

    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());

    for(int i=0; i < n; i++){
        cout << v[i] << " " << v1[i] << endl;
    }

    return 0;
}