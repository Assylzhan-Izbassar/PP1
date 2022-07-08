#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int a){
    if(a == 1)return false;
    for(int i = 2 ; i < sqrt(a);i++){
        if(a % i == 0){
            return false;
        }
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

    int k;
    cin >> k;

    int count = 0;

    for(int i=0; i < n; i++){
        if(isPrime(v[i])){
            if(v[i] > k)count++;
        }
    }

    cout << count << endl;

    return 0;
}