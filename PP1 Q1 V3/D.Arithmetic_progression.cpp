#include <iostream>

using namespace std;

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    size_t sum = a;

    int diff = b - a;

    for(int i=1; i < c; i++){
        sum = sum + diff;
    }

    cout << sum << endl;

    return 0;
}