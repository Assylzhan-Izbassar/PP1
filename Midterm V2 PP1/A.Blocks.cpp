#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
int cnt = 0;
    for(int i = 0; i <n; i++){
        cin >> arr[i];
    }
for(int i=0; i<n; i++) {
    if(arr[i]==0 && arr[i+1]==1)
cnt++;
}
    // // for(size_t i = 1; i <= n; i++){
    // //     if(arr[i] == 1){
    // //         for(size_t j = i + 1; j <= n; j++){
    // //             while(arr[j] == 0){
    // //                 arr[j] = 0;
    // //             }
    // //         }
    // //     }
    // // } 

    // size_t count = 0;

    // for(size_t i = 1; i <= n; i++){
    //     if(arr[i] == 1)count++;
    // }

 
cout << cnt << endl;
  
    return 0;
}