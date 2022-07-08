#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n][n];

    for(size_t i=0; i < n; ++i){
        for(size_t j=0; j < 2*n-1; ++j){
            if(j < n-1-i){
                cout << '.';
            }
            else if(j >= n-1-i && j <= n-1+i){
                cout << '*';
            }
            else if(j > n-1+i){
                cout << '.';
            }
        }
        cout << endl;
    }

    return 0;
}