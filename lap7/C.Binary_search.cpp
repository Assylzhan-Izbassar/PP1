#include <iostream>

using namespace std;

bool binary(int c,int a[], int b){
    if(c > 0){
        if(a[c] == b)return true;
        else return binary((c-1), a, b);
    }
    else return false;
}
int main(){

    int n, k;
    cin >> n;

    int arr[n];

    for(size_t i = 1; i <= n; ++i){
        cin >> arr[i];
    }

    cin >> k;

    if(binary(n,arr,k)){
        cout << "Yes\n"; 
    }
    else cout << "No\n";

    return 0;
}