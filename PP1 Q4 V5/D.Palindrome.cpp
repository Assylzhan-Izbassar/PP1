#include <iostream>

using namespace std;

int main(){

    size_t n;
    cin >> n;

    int arr[n][n];

    for(size_t i=0; i < n; i++){
        for(size_t j=0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(size_t i=0; i < n; i++){
        for(size_t j=0; j < n; j++){
            if(arr[i][i] != arr[n-i-1][n-i-1] || arr[i][n-1-i] != arr[n-i-1][i]){
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}