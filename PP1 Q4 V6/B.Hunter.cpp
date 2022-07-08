#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int d;
    cin >> d;

    size_t sum = n;
 
    for(size_t i=2; i <= d; i++){
        sum += n*(2*i);
    }

    cout << sum << endl;

    return 0;
}