#include <iostream>

using namespace std;

int main(){

    size_t n;
    cin >> n;

    int arr[n];

    for(size_t i = 0; i < n; i++){
        cin >> arr[i];
    }

    int mini = arr[0];

    for(size_t i=0; i < n; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }

    cout << mini << endl; 

    return 0;
}