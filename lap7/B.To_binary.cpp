#include <iostream>

using namespace std; 

string binary(int n, string s){
    if(n > 0){
        s = char((n%2) + '0') + s;
        return binary(n/2, s); 
    }
    return s;
}

int main(){

    int n;
    cin >> n;

    string res = "";

    cout << binary(n, res) << endl;

    return 0;
}