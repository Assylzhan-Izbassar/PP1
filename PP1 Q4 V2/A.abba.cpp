#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    int count = 0;

    for(int i=0; i < s.size(); i++){
      
        if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'b' && s[i+3] == 'a'){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}