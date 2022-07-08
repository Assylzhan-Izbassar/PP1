#include <iostream>

using namespace std;

int main(){ 

    int N;
    cin >> N;

    int arr[N];

    for(size_t i=0; i < N; i++){
        cin >> arr[i];
    }

    int maxi = arr[0];

    for(size_t i=0; i < N; i++){
        if(maxi < arr[i]){
            maxi = arr[i];
        }
    }

    cout << maxi << endl;

    return 0;
}