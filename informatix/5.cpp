#include <iostream>

using namespace std;

int main(){ 

    int n; 
    cin >> n;

    int arr[n];

    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    
    int count=0;

    for(int i=0; i < n; i++){

        if(i == 0)continue;
        
        if(arr[i] > arr[i-1]){
            count++;
        }
    }

    cout << count << endl; 

    return 0;
}