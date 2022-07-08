#include <iostream>
#include <map>

using namespace std;

int main(){ 

    map<string,int> m;

    m["AAA"] = 17;
    m["bbb"] = 2;
    m["ccc"] = 4;

    map<string,int>::iterator it;

    for(it = m.begin(); it != m.end(); it++){
        pair<string,int> p = *it;
        cout << p.first << " " << p.second << "\n";
    }
    
    return 0;
}