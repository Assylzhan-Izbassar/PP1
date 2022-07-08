#include <iostream>
#include <algorithm>
using namespace std;

int main(){ 

    int n;
    cin >> n;

    int a[n][n*2-1];
    
    for(int i = 1; i <=n;i++){
        for(int j = 1; j <= n; j++){
            if(i+j == n+1){
                a[i][j] = '*';
            }
        }
    }


    for(int i = 1; i <=n;i++){
        for(int j = n; j <= 2*n-1; j++){
            if(i+n-1 == j){
                a[i][j] = '*';
            }
        }
    }
    
    for(int i = 1; i <=n;i++){
        for(int j = 1; j <= n*2-1; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}