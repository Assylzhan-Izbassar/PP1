#include <iostream>
#include <set>

using namespace std;

int main(){

    set<char> s;
    string str;
    cin >> str;

    string res = " ";

    for(int i=0; i < str.size(); i++){
        s.insert(tolower(str[i]));
    }

    cout << s.size() << endl;

    set<char>::iterator it;
    for(it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}