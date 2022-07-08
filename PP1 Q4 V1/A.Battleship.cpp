#include <iostream>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int k, i, j;

    cin >> k;

    for(int i=0; i < k; i++){
        cin >> i >> j;
    }

    cout << (n*m) - k << endl;

    return 0;
}