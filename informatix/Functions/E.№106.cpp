#include <iostream>

using namespace std;

int How_many(string s){
    size_t count = 1;
    for(size_t i=0; i < s.size(); ++i){
        if(s[i] == ' ' && s[i+1])count++;
    }
    return count;
}

int main(){

    string s;
    getline(cin, s);

    cout << How_many(s) << endl;
    
    return 0;
}
