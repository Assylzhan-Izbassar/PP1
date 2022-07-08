#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(vector<int> a, vector<int> b){
    int sum_a = 0; int sum_b = 0;
    for(int i = 0; i < a.size(); i++){
        sum_a += a[i];
    }
    for(int i=0; i < b.size(); i++){
        sum_b += b[i];
    }

    if(sum_a < sum_b)return true;
    if(sum_a > sum_b)return false;
    
    if(a.size() < b.size())return true;
    if(a.size() > b.size())return false;
    
    for(int i=0; i < a.size(); i++){
        if(a[i] < b[i])return true;
        else return false;
    }
    
    return false;
}

int main(){

    vector<vector<int> > v;

    int n;
    cin >> n;

    int m, x;

    for(int i=0; i < n; i++){
        vector<int> v1;
        cin >> m;
        for(int j = 0; j < m; j++){
            cin >> x;
            v1.push_back(x);
        }
        v.push_back(v1);
    }

    sort(v.begin(), v.end(), f);

    for(int i=0; i < n; i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}