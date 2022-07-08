#include <iostream>
#include <map>

using namespace std;

int main(){

    map<char,int> m;

    size_t n;
    cin >> n;

    string name;
    char mark;

    m['A']; m['B']; m['C'];

    for(size_t i=0; i < n; i++){
        cin >> name >> mark;
        m[mark]++;
    }

    map<char,int>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << "\n";
    }

    return 0;
}