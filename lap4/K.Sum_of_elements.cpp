#include <iostream>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    int arr[n][m];

    for(size_t i=0; i < n; i++){
        for(size_t j=0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int sum;

    for(size_t i=0; i <n; i++){
        sum = 0;
        for(size_t j=0; j < m; j++){
            sum += arr[i][j];
        }
        cout << "The sum of row number " <<  i+1 <<  " is " << sum << endl; 
    }

    for(size_t j=0; j < m; j++){
        sum = 0;
        for(size_t i=0; i < n; i++){
            sum += arr[i][j];
        }
        cout << "The sum of column number " <<  j+1 <<  " is " << sum << endl; 
    }

    return 0;
}