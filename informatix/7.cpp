#include <iostream>

using namespace std;

int main(){ 

    int N; 
    cin >> N;

    int arr[N];

    for(int i=0; i < N; i++){
        cin >> arr[i];
    }

    int k;

    for(int i=0; i < N; i=i+2){
        
        if(N % 2 != 0){ 
            if(i == N-1)break;
        }
        if(i < i+1){
            k=arr[i];
            arr[i]=arr[i]-arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=arr[i+1]-arr[i+1];
            arr[i+1]=k;
        }
    }

    for(int i=0; i < N; i++){
        cout << arr[i] << " ";
    }

    return 0;
}