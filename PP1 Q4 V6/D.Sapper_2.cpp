#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<pair<int, int> > v;
    pair<int, int> p;

    int n,k;
    cin >> n >> k;

    int i,j;

    for(size_t a = 0; a < k; i++){
        cin >> i >> j;
        v[a] = make_pair(i,j);
    }

    cin >> i >> j;

    for(int m = 0; m < v.size(); m++){
        cout << v[i].first << " "
    }

    cout << "NO" << endl;

    return 0;
}