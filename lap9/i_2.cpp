#include <iostream>
#include <map>

using namespace std;

int main(){

map<string,int> m;
    string s;
    int n;
    cin >> n;

    for(int i=1; i <= n; i++){
        cin >> s;
        if(m[s] == 0) cout << "new user added" << endl;
        else cout << "user already exists" << endl;
        m[s]++;
    }


    return 0;
}