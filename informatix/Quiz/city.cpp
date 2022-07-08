#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, string> m;

    string s;
    string t;

    int n;
    cin >> n;

    for(int i=0; i < n; i++){
        cin >> s >> t;
        m[s] = t;
    }

    int k;
    cin >> k;

    string q;
    
    map<string, string>::iterator it;

    for(int i=0; i < k; i++){
        cin >> q;
            for(it = m.begin(); it != m.end(); it++){
                string j = (*it).second;
                if(j == q){
                    cout << (*it).first << endl;
                }
        }
    }  

    return 0;
}