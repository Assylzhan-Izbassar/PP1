#include <iostream>

#include <algorithm>

using namespace std;

int main(){ 

    string str;
    cin >> str;

    string t = str;

    reverse(t.begin(), t.end());

    if(str == t){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

    return 0;
}