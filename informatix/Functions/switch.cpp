#include <iostream>

using namespace std;

int main(){

    int32_t n;
    cin >> n;

    switch(n){
        case 3:
            cout << "number is " << n << "\n";
            break;
        case 5:
            cout << "number equal to " << n << "\n";
            break;
        default:
            cout << "number is unsigned" << "\n";
            break;
    }

    return 0;
}