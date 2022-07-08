#include <iostream>
#include <algorithm>

using namespace std;

bool f(int k){
    if(k % 2 == 0)return true;
    return false;
}

bool f1(int k){
    if(k % 3 == 0)return true;
    return false;
}

bool f2(int k){
    if(k % 4 == 0)return true;
    return false;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    int count1 = count_if(arr, arr + n, f);
    int count2 = count_if(arr, arr + n, f1);
    int count3 = count_if(arr, arr + n, f2);

    cout << count1 << " " << count2 << " " << count3 << "\n";

    return 0;
}