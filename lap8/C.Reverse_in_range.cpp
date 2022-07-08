#include <iostream>
#include <vector>
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

    int a,b;

    cin >> a >> b;

    for(int i = 0; i < a; i++){
        cout << v[i] << " ";
    }
    
    for(int i = b; i >= a; i--){
        cout << v[i] << " ";
    }
    
    for(int i = b+1; i < n; i++){
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}