#include <iostream>
#include <vector>

using namespace std;

int main(){ 

    vector<int> v;
    int n, k;
    cin >> n >> k;

    int x;

    for(int i=0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    int count = 0;

    for(int i=0; i < v.size(); i++){
        if(v[i] == k)count++;
    }

    cout << count << endl;

    return 0;
}