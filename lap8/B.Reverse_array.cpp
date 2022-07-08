#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){ 

    vector<int> v;

    int N;
    cin >> N;

    int x;

    while(cin >> x){
        v.push_back(x);
    }

    reverse(v.begin(), v.end());

    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}