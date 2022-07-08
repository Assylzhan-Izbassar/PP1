#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    int min = arr[0] + arr[1] + arr[2];

    for(int i=0; i < n - 2; i++){
        if((arr[i] + arr[i+1]+ arr[i+2]) < min){
            min = arr[i] + arr[i+1]+ arr[i+2];
        }
    }

    cout << min << endl;

    return 0;
}