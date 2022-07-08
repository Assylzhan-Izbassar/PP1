#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, string> map_1;
    string s,k;
    int n,m;

    cin >> n;

    for(size_t i=1; i <= n; ++i){
        cin >> s >> k;
        map_1[s] = k;
    }

    cin >> m;

    for(size_t i=1; i <= m; ++i){
        cin >> s >> k;
        if(map_1.find(s) == map_1.end()){
            cout << "login error" << endl;
        }
        else{
            if(map_1[s] != k){
                cout << "password error" << endl;
            }
            else{
                cout << "correct password" << endl;
            }
        }
    }

    return 0;
}