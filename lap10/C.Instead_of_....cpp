#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v, v1;

    int x;

    for(int i=0; i < n; i++){
        cin >> x;
        v.push_back(x);
        v1.push_back(x);
    }

    reverse(v1.begin(), v1.end());

    for(int i=0; i < v.size(); i++){
        if(v[i] == v1[i]){
            cout << "OK" << endl;
        }
        else{
            cout << "Instead of" << " " << v[i] << " " << "here was" << " " << v1[i] << endl;
        }
    }

    return 0;
}