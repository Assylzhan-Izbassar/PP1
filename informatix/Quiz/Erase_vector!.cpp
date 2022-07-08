#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v, v1, v2;

    int n;
    cin >> n;

    int x;

    for(int i=0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    int k;
    cin >> k;

    for(int i=0; i < v.size(); i++){
        if(i+1 != k){
            v1.push_back(v[i]);
        } 
    }

    /*for(int i=0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }*/

    int l, r;
    cin >> l >> r;

    for(int i=0; i < l - 1; i++){
        cout << v1[i] << " ";
    }

    for(int i=r; i < v1.size(); i++){
        cout << v1[i] << " ";
    }

    cout << endl;

    return 0;
}