#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<string> v;

    string S;
    cin >> S;

    string L;

    string t;

    while(cin >> L){
        if(S == L)continue;
        t = L;
        sort(L.begin(), L.end());
        if(S == L)continue;
        else v.push_back(t);
    }

    sort(v.begin(), v.end());

    for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}