#include <iostream>

using namespace std;

int main(){

    size_t n;
    cin >> n;

    size_t arr[n];

    for(size_t i=0; i < n; ++i){
        cin >> arr[i];
    }
    size_t k = arr[0];

    for(size_t i=0; i < n; ++i){
        if(arr[i] > k)k = arr[i];
    }

    size_t m;
    cin >> m;
    size_t arr1[m];

    for(size_t i=0; i < m;++i){
        cin >> arr1[i];
        if(arr1[i] > k)k = arr1[i];
    }

    int x[k];

    for(size_t i=1; i<=k; ++i){
        x[i] = 0;
    }

    for(size_t i=0; i < n; ++i){
        x[arr[i]]++;
    }
    for(size_t i=0; i< m; ++i){
        x[arr1[i]]++;
    }

    for(size_t i=1; i <= k; ++i){
        while(x[i] > 0){
            cout << i << " ";
            x[i]--;
        }
    }

    return 0;
}