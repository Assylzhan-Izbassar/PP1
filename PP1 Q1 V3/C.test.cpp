#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    int count = 0; int count1 = 0;

    for(int i=1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            count++;
        }
        else count1++;
    }

    if(count < count1){
        for(int i=1; i <=n; i++){
            if(arr[i] % 2 == 0){
                cout << i << " ";
            }
        }
    }
    else{
        for(int i=1; i <=n; i++){
            if(arr[i] % 2 != 0){
                cout << i << " ";
            }
        }

    }

    cout << endl;

    return 0;
}

