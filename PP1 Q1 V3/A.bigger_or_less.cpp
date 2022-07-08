#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    size_t sum = 0;

    for(size_t i=0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > 1000 || arr[i] < 100){
            sum += arr[i];
        }
    }

    cout << sum << endl;

    return 0;
}