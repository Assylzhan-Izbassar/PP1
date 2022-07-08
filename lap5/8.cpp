#include <iostream>

using namespace std;

string str(int n , string s){
    if(n > 0){
       s = char(n % 2 + '0') + s;
       return str(n/2, s);
    }
    return s;
}

int main(){
    int n;
    string s ="";
    cin >> n;
    cout << str(n,s);
}


