#include <iostream>

#include <cmath>

using namespace std;

int main(){

    int x;
    cin >> x;

    int k;
    k = sqrt(x);

    if(k*k == x){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl; 


    return 0;
}