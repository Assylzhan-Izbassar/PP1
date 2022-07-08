#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    string s;

    /*for(int i=0; i < 2; i++){
        cin >> s;
        if(s[s.size() - 1] == ',' || s[s.size() - 1] == '.'){
            s.erase(s.size() - 1, 1);
        }
        cout << s << " ";

    }*/

    while(cin >> s){
        if(s[s.size() - 1] == ',' || s[s.size() - 1] == '.'){
            s.erase(s.size() - 1, 1);
            m[s]++;
        }
        else m[s]++;
    }

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if((*it).second >= 2){
            cout << (*it).first << "\n";
        }
    }

    return 0;
}