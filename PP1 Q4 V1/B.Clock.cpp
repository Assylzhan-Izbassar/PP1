#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    if(n == 0 || n == 12){
        cout << 0 << endl;
    }
    else if(n>=1 && n<=6){
        cout << 30 * n << endl;
    }
    else if(n>6 && n < 12){
        cout << 360 - n*30 << endl;
    }

    return 0;
}