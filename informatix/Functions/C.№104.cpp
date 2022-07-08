#include <iostream>

using namespace std;

unsigned char ToUpper(unsigned char c){
    if(c >= 'A' && c <= 'Z'){
        c = tolower(c);
        return c;
    }
    else if(c >= 'a' && c <= 'z'){
        c = toupper(c);
        return c;
    }
}

int main(){

    unsigned char x;
    cin >> x;

    cout << ToUpper(x) << endl;

    return 0;
}