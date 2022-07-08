#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    size_t sum = 0;

    for(size_t i=1; i <= n;i++){
        sum += i;
    }

    cout << sum << endl;

    return 0;
}