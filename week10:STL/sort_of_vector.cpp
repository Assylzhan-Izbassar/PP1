#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){ 

    vector<char> v;

    char x;

    while(cin >> x){
        if(x == '0')break;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}