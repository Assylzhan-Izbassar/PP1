#include <iostream>
#include <cmath>

using namespace std;

int Power_positive(int a, int n){
    if(n == 0)return 1;
    return a*Power_positive(a,(n-1));
}
double Power_negative(int a, int n){
    if(n == 0)return 1;
    return 1/(a*Power_negative(a, (n-1)));
}

int main(){

    double a,n;
    cin >> a >> n;

    if(n > 0){
        cout << Power_positive(a,n) << endl;
    }
    else{
        cout << Power_negative(a,abs(n)) << endl;
    }


    return 0;
}