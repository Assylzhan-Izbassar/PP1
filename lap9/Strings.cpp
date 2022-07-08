#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){ 

    multimap<string, int> map1;

    map<set<string>, int> m;

    set<string> s;

    int n;
    cin >> n;

    string str;

    for(int i=1; i <= n; i++){
        cin >> str;
        map1.insert(pair <string,int>(str, i));
    }

    map<string, int> ::iterator it;

    string k;
    int j;
    for(it = map1.begin(); it != map1.end(); it++){
       
    }

    return 0;
}