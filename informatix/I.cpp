#include <iostream>

using namespace std;

int main(){ 

    int N;
    cin >> N;

    int arr[N+1];

    for(int i=0; i < N; i++){
        cin >> arr[i];
    }

    for(int i=0; i < N; i++){
        if(i < i + 1){  
            arr[i+1]=arr[i];
        }   
        if(i == N - 1){
            arr[N-1]=arr[0];
        }
    }

    for(int i=0; i < N; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}