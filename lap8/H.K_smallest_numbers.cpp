#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){ 

    vector<int> v;

    int n;
    cin >> n;

    int x;

    for(int i=0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int K;
    cin >> K;

    for(int i=0; i < K; i++){
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}