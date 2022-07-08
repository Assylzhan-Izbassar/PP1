#include <iostream>

using namespace std;

int greatest(int n, int m){
    int k = m / n;
    return n*k;
}

int main(){

    int a, b;
    cin >> a >> b;

    cout << greatest(a,b) << endl;
    return 0;
}