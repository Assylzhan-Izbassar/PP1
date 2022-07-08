#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    if(s[2] == '1'){
        cout << "Astana\n"; 
    }
    else if(s[2] == '2' && (s[4] == '2' || s[4] == '3')){
        cout << "Almaty\n";
    }

    return 0;
}