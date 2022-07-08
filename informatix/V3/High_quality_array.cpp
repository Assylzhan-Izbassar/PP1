#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k = arr[0] + arr[1];

    for(int i=1; i < n - 1; i++){
        if((arr[i] + arr[i+1]) > k) k = (arr[i] + arr[i+1]);
    }

    /*for(int i=1; i < n; i++){
        cout << (arr[i] + arr[i+1] ) << endl;
    }*/

    cout << k << endl;


    return 0;
}