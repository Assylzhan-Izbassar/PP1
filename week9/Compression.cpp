#include <iostream>

#include <algorithm>

using namespace std;

int main(){

    string s;
    cin >> s;

    for(int i=0; i < s.size(); i++){
        for(int j=i+1; j < s.size(); j++){
            if(s[i]==s[j]){
                s.erase(j,1);
                j--;
            }    
        }
    }

    for(int i=0; i < s.size(); i++){
        cout << s << endl;
        exit(0);
    }

    return 0;
}