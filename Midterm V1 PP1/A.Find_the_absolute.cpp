#include <iostream>

using namespace std;

int absolute(int a, int b){
    return abs(a-b);
}

int main(){

    int n,k;
    cin >> n >> k;

    cout << absolute(n,k) << "\n";

    return 0;
}