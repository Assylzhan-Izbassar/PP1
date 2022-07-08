#include <iostream>

using namespace std;

int main(){

    size_t n;
    cin >> n;

    size_t arr[n][n]; 

    for(size_t i=0; i < n; ++i){
        for(size_t j=0; j < n; ++j){
            arr[i][j] = 0;
        }
    }

    for(size_t i=0; i < n; ++i){
        for(size_t j = 0; j < n; ++j){
            if(i > 0 && j == n-1 && arr[i][j] == 0){
                arr[i][j] = n+i;
            
        }
    }
   
    for(size_t i=0; i < n; ++i){
        for(size_t j=0; j < n; ++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}