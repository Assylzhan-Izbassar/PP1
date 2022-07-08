#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n][n];

    for(size_t i=0; i < n; i++){
        for(size_t j=0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    size_t sum = 0;

    for(size_t i=0; i < n; i++){
        sum += arr[i][n-i-1];
    }

    cout << sum << "\n";

    return 0;
}