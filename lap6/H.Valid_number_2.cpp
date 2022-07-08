#include <iostream>

using namespace std;

long long Remainder(int factor, int divisor){
    return factor % divisor;
}

bool Valid(int n){
    while(n > 0){
        if((Remainder(n % 10,2)) != 0){
            return false;
        }
        n /= 10;
    }
    return true;
}

int main(){

    int n;
    cin >> n;

    if(Valid(n)){
        cout << "Valid";
    }
    else cout << "Not valid";

    cout << endl;

    return 0;
}