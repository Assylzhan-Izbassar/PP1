
#include <sstream>
#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    int n;
    cin >> n;
    stringstream ss;
    int point;
    string name,surname,g="";
    for(int i=0; i < n; i++){
        string x;
        bool res = true;
        while(cin >> x){
            if(x[0] >= '0' && x[0] <= '9'){
                break;
            }
            else g = g + " " + x;
        }
        ss<<x;
        ss>>point;
        m[g] = point;
    }

    int max = -1;

    map<string, int> :: iterator it;

    /*for(it = m.begin(); it != m.end(); it++){
         cout << (*it).first.first << " " << (*it).first.second << " " << (*it).second << "\n";
    }*/
    for(it = m.begin(); it != m.end(); it++){
        if(max < (*it).second){
            max = (*it).second;
        }
    }

    for(it = m.begin(); it != m.end(); it++){
        if((*it).second == max){
            cout << (*it).first << " " << (*it).second << "\n";
            break;
        }
    }

    return 0;
}