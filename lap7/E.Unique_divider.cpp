#include <iostream>

using namespace std;

int divider(int n){
    if(n > 0){
        if(n % 2 == 0) return divider(n/2);
    }
    return n;
}

int main(){
    
    int n;
    cin >> n;

    int k = divider(n);

    if(k == 1)cout << "Yes";
    else cout << "No";

    cout << endl;

    return 0;
}