#include <iostream>

using namespace std;

int phi(int n){
    if(n == 1)return 0;
    if(n == 2)return 1;
    return phi(n-1)+phi(n-2);
}

int main(){

    int n;
    cin >> n;

    cout << phi(n) << endl;

    return 0;
}