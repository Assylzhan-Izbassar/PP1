#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, int> m;
    string s;
    freopen("input.txt", "r" , stdin);
    while(cin >> s){
        m[s]++;
   }

   map<string, int>::iterator it;
   for(it = m.begin(); it != m.end(); it++){
       cout << (*it).first << " " << (*it).second << "\n";
   }
    return 0;
}