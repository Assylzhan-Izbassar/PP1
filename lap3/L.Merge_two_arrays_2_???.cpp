#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(size_t i=1; i <= n; i++){
        cin >> arr[i];
    }

    int m;
    cin >> m;

    int arr1[m];

    for(size_t i=1; i <= m; i++){
        cin >> arr1[i];
    }
    size_t h = n+m;
    int arr2[h], k = 1;
    for(size_t i = 1; i <= h; i++){   
        if(i <= n){
            arr2[i] = arr[i]; 
        }  
        if(i > n && i <= n+m){
            for(int j=m; j >= 1; j--){
                if(j == k){
                    arr2[i] = arr1[j];
                    k++;
                }
            }
        }
    }

    // for(size_t i = 1; i < h; i++){
    //     for(size_t j = i+1; j <= h; j++){
    //         if(arr2[i] > arr2[j])swap(arr2[i], arr2[j])
    //     }
    // }

    sort(arr2, arr2+h);

    for(size_t i = 1; i <= h; i++){
        cout << arr2[i] << " ";
    }

    return 0;
}