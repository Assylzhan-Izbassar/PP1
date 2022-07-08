#include <iostream>

using namespace std;

bool book(int arr[],int n,int x){
    for(size_t i=0; i < n; i++){
        if(arr[i] == x){
            return true;
            break;
        }
    }
    return false;
}

int main(){

    int n,x;
    cin >> n;

    int arr[n];

    for(size_t i=0; i < n; i++){
        cin >> arr[i];
    }

    cin >> x;

    if(book(arr,n,x)){
        cout << "Yes";
    }
    else cout << "No";

    cout << endl;

    return 0;
}