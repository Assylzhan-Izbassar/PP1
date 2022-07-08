#include <iostream>

using namespace std;

int main(){

    string s;

    int count = 0;

    while(cin >> s){  
        if(s[0] == 'a')count++;
    }

    cout << count << endl;

    return 0;
}