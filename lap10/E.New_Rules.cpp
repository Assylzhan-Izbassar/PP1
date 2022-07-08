#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool f(int k){
    if(k == 1 || k == 0 || k == -1)return false;
    for(int i=2; i*i <= abs(k); i++){
        if(abs(k) % i == 0)return false;
    }
    return true;
}

int main(){

    vector<int> v;

    int n; 
    cin >> n;

    int x;

    for(int i=0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    int count = count_if(v.begin(), v.end(), f);

    cout << count << endl;

    return 0;
}