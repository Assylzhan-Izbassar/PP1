#include <iostream>

using namespace std;

bool Valid(string t, int n){
    size_t count = 0;
    for(size_t i=0; i < t.size(); ++i){
        if(isalpha(t[i]) && isdigit(t[i+1]))count++;
        // if(isdigit(t[i])){
        //     for(size_t j=i+1; j < t.size(); ++j){
        //         if(t[j]<='0' && t[j] >='9'){
        //             count++;
        //             continue;
        //         }
        //     }
        // }
    }
    if(count >= n)return true;
    else return false;
}

int main(){
    string s;
    cin >> s;

    int x;
    cin >> x;

    if(Valid(s,x)){
        cout << "Valid";
    }
    else cout << "Not valid";

    cout << endl;

    return 0;
}