#include <iostream>

using namespace std;

int Maxi(int arr[], int n){
    int maxi = arr[0];
    for(size_t i=0; i < n; ++i){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int main(){

    int arr[4];

    for(size_t i=0; i < 4; ++i){
        cin >> arr[i];
    }

    cout << Maxi(arr, 4) << endl;

    return 0;
}