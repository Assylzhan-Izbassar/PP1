#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n][n];

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            arr[i][j] = 0; 
        }
    }

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            arr[i][0] = 1; 
            arr[n-1][j] = 1;
        }
    }

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}