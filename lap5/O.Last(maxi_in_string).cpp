#include <iostream>

using namespace std;

int main(){
     
    string s;
    cin >> s;

    char c = s[0];

    for(int i=0; i < s.size(); i++){
        if(s[i] > c){
            c = s[i];
        }
    }

    /*
    int mx = s[0];

    for(int i=0; i < s.size(); i++){
        if(s[i] > mx){
            mx = s[i];
        }
    }
    cout << char(mx);
    */

    cout << c << endl;

    return 0;
}