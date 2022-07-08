#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(){

    multimap<string,string> m;
    set<string> q;

    int n;
    cin >> n;

    string s, ss;

    for(int i=1 ;i <= n; i++){
        cin >> s >> ss;
        m.insert(make_pair(s,ss));
    }

    map<string,string> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        q.insert((*it).second);
    }

    set<string>::iterator it1;   
    for(it1 = q.begin(); it1 != q.end(); it1++){
        cout << (*it1) << " ";
    }

    return 0;
}