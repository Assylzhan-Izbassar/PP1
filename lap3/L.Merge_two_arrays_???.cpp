#include <iostream>
#include <algorithm>
using namespace std;

int main(){ 

    int n, m;
    cin >> n;

    int arr[n];
    int x;
    for(int i=1; i <= n; i++){
        cin >> arr[i];
        if(i == n){
            cin >> x;
            int j = n+1;
            while(j <= n+x){
                cin >> arr[j];
                j++;
            }
        }
    }
    sort(arr,arr+n+x + 1);
     for(int i=1; i <= n+x; i++){
         cout << arr[i] << " ";
     }
    return 0;
}