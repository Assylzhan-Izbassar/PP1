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

    int maxi = arr[0][0];
    int r = 0, c = 0;

    for(size_t i=0; i < n; i++){ 
        if(arr[i][i] > maxi){
            maxi = arr[i][i];
            r = i;
            c = i;
        }    
    }

    cout << "Maximum element is: " << maxi << " with " << "coordinates: " << r+1 << ";" << c+1 << endl;

    // for(size_t i=0; i < n; i++){
    //     for(size_t j=0; j < n; j++){
    //         if(maxi == arr[i][j]){
    //             cout << "Maximum element is: " << maxi << " with " << "coordinates: " << i+1 << ";" << j+1 << endl;
    //             exit(0);
    //         }
    //     }
    // }

    return 0;
}