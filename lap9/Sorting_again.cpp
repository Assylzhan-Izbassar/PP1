#include <iostream>
#include <vector>
#include <set>
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

    for(int i = v.size() - 1; i >= 0; i--){
        if(v[i] % 2 == 0) {
            cout << v[i] << " ";
        }
    }

    for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 != 0) {
            cout << v[i] << " ";
        }
    }   

    return 0;
}