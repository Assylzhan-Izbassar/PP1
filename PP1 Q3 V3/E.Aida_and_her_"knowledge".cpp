#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> v;
    int x;

    for(int i=0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < k - 2; i++){
        for(int j = i+1; j < k - 1; j++){
            if(v[i] > v[j])swap(v[i], v[j]);
        }
    }

    for(int i = k; i < v.size() - 1; i++){
        for(int j = i+1; j < v.size(); j++){
            if(v[i] < v[j])swap(v[i], v[j]);
        }
    }

    for(int i=0; i< v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}