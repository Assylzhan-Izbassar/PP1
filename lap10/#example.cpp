#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    string s1 = s.substr(s.size() - 4, 4); 

    cout << s1;

    return 0;
}