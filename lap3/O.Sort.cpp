#include <iostream> 

#include <algorithm>

using namespace std;

int main(){ 

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);

    /*for(int i=0; i < n; i++){
        for(int j=i+1; j < n; j++){
            if(arr[i]>arr[j])swap(arr[i],arr[j]);
        }
    }*/

    reverse(arr, arr+n);

    /*for(int i=n-1; i >=0; i--){
        cout << arr[i] << " ";
    }*/

    /*for(int i=0; i < n/2; i++){
        swap(arr[i],arr[n-1-i]);
    }*/

    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}