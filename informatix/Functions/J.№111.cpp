#include <iostream>

using namespace std;

void coordinates(string s, int k){
    if(s[0] == 'N'){
        cout << 0 << " " << k << endl; 
    }
    if(s[0] == 'W'){
        cout << (-1)*k << " " << 0 << endl; 
    }
    if(s[0] == 'S'){
        cout << 0 << " " << (-1)*k << endl; 
    }
    if(s[0] == 'E'){
        cout << k << " " << 0 << endl; 
    }
}

int main(){

    string s;int n;
    cin >> s >> n;

    coordinates(s,n);

    return 0;
}