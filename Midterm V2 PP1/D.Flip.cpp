#include <iostream>
#include <cmath>

using namespace std;
int arr[8];
int main(){

    int n;
    cin >> n;
    int i=0;
    while (i<8){
    arr[i] = n%2;
    n = n/2;
    i++;
    }
    // for(int i=0; i<8; i++) {
    //     arr[i] = n%2;
    //     n = n/2;
    // }
    for(int i=0; i<8; i++) {
        if(arr[i]==1)
        arr[i] = 0;
        else arr[i] = 1;
    }
    int ans = 0;
    for(int i=0; i<8; i++) {
        if(arr[i]==1)
        ans+= pow(2,i);
    
    }
cout << ans << endl;

    return 0;
}