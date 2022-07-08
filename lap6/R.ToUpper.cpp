#include <iostream>

using namespace std;

char ToUpper1(char x){
    if(x >= 'A' && x <= 'Z'){
        return x;
    }
    else{
        return char(int(x) - 32);
    }
}

void ToUpper(char x){
    if(x >= 'A' && x <= 'Z'){
        cout << x << "\n";
    }
    else{
        char X = char(int(x) - 32);
        cout << X << "\n";
    }
}

int main(){

    char x;
    cin >> x;

    //ToUpper(x);

    cout << ToUpper1(x) << endl;

    return 0;
}