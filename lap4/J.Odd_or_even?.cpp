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
    for(size_t i=0; i < n; i++){
        for(size_t j=0; j < m; j++){
            if((i+j) % 2 == 0){
                arr[i][j]++;
            }
            else arr[i][j]--;
        }
    }
    for(size_t i=0; i < n; i++){
        for(size_t j=0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}