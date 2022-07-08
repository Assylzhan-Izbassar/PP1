#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void binary(int n){
    
    string res = " ";

    while(n > 0){
        res = char(char(n % 2) + '0') + res;
        n = n/2;
    }

    cout << res << endl;
}

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i=0; i < n; i++){
        cin >> a[i];
    }

    for_each(a,a+n, binary);

    return 0;
}