#include <iostream>

using namespace std;

int Even(string s, int count, int i){
    if(i == s.size())return count;
    if((s[i] - '0') % 2 == 0){
        return Even(s, count+1, i+1);
    } 
    else{
        return Even(s, count, i+1);
    }
}

int main(){

    string s;
    cin >> s;

    cout << Even(s,0,0) << endl;

    return 0;
}