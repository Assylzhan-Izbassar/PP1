#include <iostream>

using namespace std;

int main(){ 

    int n;
    cin >> n;

    int arr[n][n];

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    int maxi = -1e6 - 17;

    int x;
    int y;

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
                x = i;
                y = j;
            }
        }
    }

    cout << ++x<< " " << ++y << endl;

    return 0;
}