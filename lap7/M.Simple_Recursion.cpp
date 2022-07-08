#include <iostream>

using namespace std;

int Simple(size_t n, int k){
    if(k != n){
        cout << k << " ";
        return Simple(n,k+1);
    }
    else return n;
}

int main(){

    size_t n;
    cin >> n;

    cout << Simple(n, 1) << endl;

    return 0;
}