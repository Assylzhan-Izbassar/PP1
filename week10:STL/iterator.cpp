#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){ 

    vector<int> v;

    int x;

    while(cin >> x){
        if(x == 0)break;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}