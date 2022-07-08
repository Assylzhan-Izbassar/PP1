#include <iostream>
#include <map>

using namespace std;

int main(){
    
    map<int, string> m;

    m[1] = "JANUARY";
    m[2] = "FEBRUARY";
    m[3] = "MARCH";
    m[4] = "APRIL";
    m[5] = "MAY";
    m[6] = "JUNE";
    m[7] = "JULY";
    m[8] = "AUGUST";
    m[9] = "SEPTEMBER";
    m[10] = "OCTOBER";
    m[11] = "NOVEMBER";
    m[12] = "DECEMBER";

    string s;
    int k, d, a;
    cin >> s >> k;

    map<int, string> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if((*it).second == s){
            d = (*it).first + k;
        }
    }

    if(d > 12){
        a = d % 12;
        for(it = m.begin(); it != m.end(); it++){
            if((*it).first == a){
                cout << (*it).second << endl;
            }
        }
    }
    else{
        for(it = m.begin(); it != m.end(); it++){
            if((*it).first == d){
                cout << (*it).second << endl;
            }
        }
    }

    return 0;
}