#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n]; 

    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    int min = arr[0];

    for(int i=0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    if(min < 0){
        cout << 0 << endl;
        return 0;
    }

    cout << 500 + min << endl;

    return 0;
}