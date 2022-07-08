#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v;

    int x;

    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    bool res = true;

    sort(begin(v), end(v));

    do{
        for(int i=0; i < v.size(); i++){
            if(v[i] == v[v.size() - i - 1]){
                res = true;
            }
            else{
                res = false;
                break;
            }
        }

        if(res == true){
            for(int i =0; i < v.size(); i++){
                cout << v[i] << " ";
            }
            return 0;
        }
    }while(next_permutation(v.begin(),v.end()));

    cout << "Impossible" << endl;

    return 0;
}