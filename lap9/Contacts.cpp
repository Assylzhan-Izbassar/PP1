#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){ 

    map<string, int> m;

    int n;
    cin >> n;

    string s;

    for(int i=0; i < n; i++){
        cin >> s;
        m[s]++;
    }

    map<string, int> :: iterator it;

    int k;

    int count = 0;

    for(it = m.begin(); it != m.end(); it++){
        if((*it).second % 3 == 0){
            k = (*it).second / 3;
            count++;
        }

        //cout << (*it).first << " " << (*it).second << endl;
    }

    cout << count << endl;

    return 0;
}