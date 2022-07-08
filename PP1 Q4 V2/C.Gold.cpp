#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int k;
    cin >> k;

    int arr[k];

    for(int i=0; i < k; i++){
        cin >> arr[i];
    }

    int max_price = arr[0];

    for(int i=0; i < k; i++){
        if(arr[i] > max_price){
            max_price = arr[i];
        }
    }

    cout << n * max_price << endl;

    return 0;
}