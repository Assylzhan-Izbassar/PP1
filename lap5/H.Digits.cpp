#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    size_t count = 0;

    for(size_t i=1; i < s.size(); i++){
        if(s[i] == s[0]){
            count++;
            s[i] = '*';
        }
    }

    s[0] = '*';

    for(size_t i=0; i < s.size(); i++){
        size_t count2 = 0;
        if(s[i] >= '0' && s[i] <= '9'){
            for(size_t j=i+1; j < s.size(); j++){
                if(s[i] == s[j]){
                    count2++;
                    s[j] = '*';
                }
            }
            if(count != count2){
                cout << "NO" << "\n";
                return 0;
            } 
        }
    }

    cout << "YES" << endl;

    return 0;
}