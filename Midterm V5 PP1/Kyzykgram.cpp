#include <iostream>

using namespace std;

int main(){

    string s,t;

    cin >> s >> t;

    for(int i=0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }

    for(int i=0; i < t.size(); i++){
        t[i] = tolower(t[i]);
    }

    if(s == t){
        cout << "Valid"<< endl;
    }
    else{
        cout << "Invalid" << endl;
    }


    

    return 0;
}