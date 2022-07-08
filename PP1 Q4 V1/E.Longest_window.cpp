#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=1; i <= n; i++){
        cin >> arr[i];
    }

    int window = arr[3] - arr[2];

    for(int i=3; i <= n; i = i + 2){
        
        if((arr[i] - arr[i-1]) > window){
            window = arr[i] - arr[i-1];
        }
        if(i == n - 1)break;
    }

    if(window <= 0){
        cout << 0 << endl;
        return 0;
    }

    cout << window << endl;

    return 0;
}