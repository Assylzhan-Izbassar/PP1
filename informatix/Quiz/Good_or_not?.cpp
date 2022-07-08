#include <iostream>
#include <map>

using namespace std;

int main(){ 

    map<string, int> m;

    string s;

    while(cin >> s){
        m[s]++;
    }

    if(m.size() >= 7){
        cout << "Good";
    }
    else cout << "Not good";

    cout << endl;

    /*int count = 0;
    map<string,int>::iterator it;
    for(it= m.begin();it != m.end();it++){
        count++;
    }

    if(count >= 7){
        cout << "Good";
    }
    else cout << "Not good";

    cout << endl;*/

    return 0;
}