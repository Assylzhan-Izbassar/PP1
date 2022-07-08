#include <iostream>

using namespace std;

bool Valid(string s){
    for(size_t i=0; i < s.size(); ++i){
        if((s[i] - '0') % 2 != 0){
            return false;
            break;
        }
    }
    return true;
}

int main(){

    string s;
    cin >> s;

    if(Valid(s)){
        cout << "Valid";
    }

    else cout << "Not valid";

    cout << endl;

    return 0;
}