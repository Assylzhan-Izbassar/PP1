#include <iostream>

using namespace std;

int main(){ 
    
    int n;
    cin >> n;

    int arr[n];

    for(int i=1; i <= n; i++){
        cin >> arr[i];
    }

    int maxi = arr[1];
    
    int index;
    
    for(int i=1; i <= n; i++){      
        if(arr[i] >= maxi){ 
            maxi = arr[i];          
            index = i;         
        }
    }
 
    cout << index << endl;

    return 0;
}