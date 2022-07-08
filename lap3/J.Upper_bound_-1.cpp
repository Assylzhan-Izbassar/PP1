#include <iostream>

using namespace std;

int main(){ 

    int n, m;
    cin >> n >> m;

    int arr[n];

    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    int maxi = arr[0];

    for(int i=0; i < n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    for(int i=0; i < n; i++){
        if(maxi < m){
            maxi = maxi;
        }
        if(maxi > m){

            if(m >= arr[i] && m < arr[i+1]){
                maxi =arr[i];
            }

        }
    }


    for(int i=0; i < n; i++){
        if(arr[i] == maxi){
            cout << i + 1 << endl;
        }
    }

    return 0;
}