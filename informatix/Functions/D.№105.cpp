#include <iostream>

using namespace std;

bool Compare(string S1, string S2){
    if(S1 == S2)return true;
    else return false;
}

int main(){

    string a,b;
    cin >> a >> b;

    if(Compare(a,b))cout << "yes\n";
    else cout << "no\n";

    return 0;
}