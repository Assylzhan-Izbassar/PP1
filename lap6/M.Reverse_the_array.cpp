#include <iostream>

using namespace std;

void Reverse(int arr[], int n){
    for(int i = n - 1; i >=0; i--){
        cout << arr[i] << " ";
    }
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(size_t i=0; i < n; ++i){
        cin >> arr[i];
    }

    Reverse(arr, n);

    return 0;
}