#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int l, int r){
    return l > r;
}

int main(){

    vector<int> v;

    int N, K;
    cin >> N >> K;

    for(int i = 1; i <= N; i++){
        if(N % i == 0)v.push_back(i);
    }

    sort(v.begin(), v.end(), f);
    
    cout << v[K - 1];

    cout << endl;

    return 0;
}