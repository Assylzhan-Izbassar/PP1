#include <iostream>

using namespace std;

int main(){ 

    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    int k = 1e6+17;
    int index;

    for(int i=0; i < n; i++){

        sum = 0;
        
        for(int j=0; j < m; j++){
            
            sum = sum + arr[i][j];

            //cout << sum << " ";    
        }
        //cout << endl;
        if(sum < k){
            k = sum;
            index = i+1;
        }
        
    }

    //cout << k << endl;
    cout << index << endl;

    return 0;
}