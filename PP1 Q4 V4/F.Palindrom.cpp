#include <iostream>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    int arr[n][m];

    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            if(arr[0][j] != arr[0][m-j-1] || arr[n-1][j] != arr[n-1][m-1-j]){
                cout << "NO" << endl;
                return 0;
            }
        }   
    }

    cout << "YES" << endl;

    return 0;
}