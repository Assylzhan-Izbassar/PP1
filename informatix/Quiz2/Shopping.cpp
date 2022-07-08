#include <iostream>
#include <set>
#include <map>
using namespace std;

int main(){
    set<string> a;
    set<string> a1;
    map<string,bool> m;
    string x;
    bool res = true;
    while(cin >> x){
        if(m[x]!=true){
            if(res){
                res = false;
                a.insert(x);
            }
            else{
                res = true;
                a1.insert(x);
            }
            m[x]= true;
        }
    }
    cout << "Aizhan" << endl;
    
    return 0;
}