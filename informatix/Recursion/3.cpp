#include <iostream>
#include <cmath>

using namespace std;

int Power(int a, int n){
    if(n % 2 == 0){
        if(n == 1)return 1;
        return a*a*Power(a,(n/2));
    }
    else{
        if(n == 0)return 1;
        return a*Power(a,(n-1));
    } 
}

int main(){
    
    int a, n;
    cin >> a >> n;
    
    cout << Power(a,n) << "\n";
    
    return 0;
}