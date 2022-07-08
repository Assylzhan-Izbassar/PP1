#include <iostream>

using namespace std;

int main(){

    string s;

    getline(cin, s);

    int n;
    cin >> n;

    for(size_t i = n; i < s.size(); i++){
        cout << s[i] ;
    }

    return 0;
}