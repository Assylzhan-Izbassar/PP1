#include <iostream>

using namespace std;

int main(){ 

    int n;
    cin >> n;

    int arr[n][n];
    int cnt = 0;

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    int maxi = -1e6-17;   
    int premaxi = arr[0][0];

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(arr[i][j] > maxi){
                premaxi = maxi;
                cnt++;
                maxi=arr[i][j];
            }
            else if(arr[i][j]>premaxi && arr[i][j] != maxi){
                premaxi = arr[i][j];
            }
        }
    }

    if(cnt == 1)cout << 0 << endl;

    else cout << premaxi << endl;
    

    return 0;
}