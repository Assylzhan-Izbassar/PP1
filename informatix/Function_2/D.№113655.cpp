#include <iostream>

using namespace std;

void insert_to_string(string s){
    for(size_t i=0; i < s.size(); ++i){
        if(i == s.size() - 1){
            cout << s[i];
            break;
        }
        cout << s[i] << '*';
    }
}

int main(){

    string s;
    cin >> s;

    insert_to_string(s);

    cout << endl;

    return 0;
}