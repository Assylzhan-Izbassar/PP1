#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double hypotenuse(int a, int b){
    return sqrt(a*a + b*b);
}

int main(){

    int n,m;
    cin >> n >> m;

    cout << setprecision(4) << hypotenuse(n, m) << endl;


    return 0;
}