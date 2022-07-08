#include <iostream>

using namespace std;

int main(){ 

    string str;
    cin >> str;

    /*for(int i=0; i < str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }*/

    for(size_t i=0; i <str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = toupper(str[i]);
        }
    }

    cout << str << endl;

    return 0;
}