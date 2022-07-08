#include <iostream>

using namespace std;

bool IsDigit(unsigned char c){
    if(c >= '0' && c <= '9')return true;
    else return false;
}
int main(){

    char x;
    cin >> x;

    if(IsDigit(x)){
        cout << "yes\n";
    }
    else cout << "no\n";

    return 0;
}