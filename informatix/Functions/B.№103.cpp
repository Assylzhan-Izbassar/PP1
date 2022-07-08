#include <iostream>

using namespace std;

unsigned char ToUpper(unsigned char c){
    if(c >= 'A' && c <= 'Z'){
        return c;
    }
    else if(c >= 'a' && c <= 'z'){
        unsigned char X = char(int(c) - 32);
        return X;
    }
}

int main(){

    unsigned char x;
    cin >> x;

    cout << ToUpper(x) << endl;

    return 0;
}