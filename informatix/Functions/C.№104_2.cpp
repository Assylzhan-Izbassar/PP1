#include <iostream>

using namespace std;

unsigned char ToUpper(unsigned char c){
    c = c>= 'A' && c<= 'Z' ? tolower(c) : toupper(c);
    return c;
}

int main(){

    unsigned char x;
    cin >> x;

    cout << ToUpper(x) << endl;

    return 0;
}