#include <iostream>

using namespace std;

bool f(int a, int b){
    if(a == b)return true;
    return false;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(size_t i=0; i < n; i++){
        cin >> arr[i];
    }
    
    int x;
    cin >> x;

    for(size_t i=0; i < n; i++){
        if(f(arr[i],x)){
            cout << "Yes" << endl;
            exit(0);
        }
    }

    cout << "No" << endl;

    return 0;
}