#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    int n;
    cin >> n;

    int x, k, a;

    for(size_t i=1; i <= n; ++i){
        cin >> x;
        v.push_back(x);
    }

    cin >> k >> a;

    v.insert(begin(v)+k, a);

    vector<int> :: iterator it;

    for(it = begin(v); it != end(v); ++it){
        cout << (*it) << " ";
    }

    return 0;
}