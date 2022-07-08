#include <iostream>
#include <map>

using namespace std;

#define st first
#define nd second 

map<string,pair<string, string> > m;

int main(){

    freopen("input.txt", "r", stdin);
    string id, name, surname;
    while(cin >> id >> name >> surname){
        m[id] = make_pair(name, surname);
    }

    map<string, pair<string, string> >::iterator it;
    for(it = m.begin(); it != m.end(); it++){
       
        cout << (*it).st << " " << (*it).nd.st << " " << (*it).nd.nd << "\n";
    }


    return 0;
}