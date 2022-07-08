#include <iostream>

using namespace std;

int main(){

    for(char i='A'; i <='Z'; ++i){
        cout << i << " - " << int(i) << " - " << int(i) - 64 << "\n";
    }

    return 0;
}
