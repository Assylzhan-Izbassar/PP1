#include <iostream>

using namespace std;

int sum(int k, int n){
    cin >> n;
    if(n != 0){
        k += n;
        return sum(k, n);
    }
    else{
        return k;
    }
}

int main(){

    cout << sum(0,0) << endl;

    return 0;
}