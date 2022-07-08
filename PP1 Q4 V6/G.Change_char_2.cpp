#include <iostream>

using namespace std;

int main(){

    char c;
    cin >> c;

    if(c >= 'A' && c <= 'Z'){
        c = tolower(c);
        cout << c << endl;
    }
    else if(c >= 'a' && c <= 'z'){
        c = toupper(c);
        cout << c << endl;
    }
    else if(c <= 'A' || c >= 'Z' || c <= 'a' || c >= 'z'){
        cout << "error";
    }


    return 0;
}