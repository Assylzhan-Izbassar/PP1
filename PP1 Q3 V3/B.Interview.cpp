#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,target;
    cin >> n >> target;

    vector<int> v;
    int x;

    for(size_t i=1; i <=n; i++){
        cin >> x;
        v.push_back(x);
    }

    for(size_t i = 0; i < v.size(); i++){
        for(size_t j = i+1; j < v.size(); j++){
            if((v[i] + v[j]) == target){
            cout << "YES" << endl;
            return 0;
        }
        }
    }

    cout << "NO" << endl;

    return 0;
}