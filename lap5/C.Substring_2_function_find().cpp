#include <iostream>

using namespace std;

int main(){

    string s, t;
    cin >> s >> t;

    if(s.find(t) == string::npos){
        cout << "NO";
    }
    else cout << "YES";

    cout << endl;

    return 0;
}