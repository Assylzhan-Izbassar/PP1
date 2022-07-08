#include <iostream>

using namespace std;

string Remove(string s){
    
    string res = "";

    for(int i=0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o' || s[i] == 'A' ||
        s[i] == 'E' || s[i] == 'I' || s[i] == 'U' || s[i] == 'O')continue;

        res += s[i];
    }

    return res;
}

int main(){

    string s;
    getline(cin, s);

    cout << Remove(s) << endl;

    return 0;
}