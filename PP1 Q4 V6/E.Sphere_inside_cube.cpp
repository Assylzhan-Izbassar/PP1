#include <iostream>

using namespace std;

int main(){

    double r, s;
    cin >> r >> s;

    double k = 2*r;

    if(s > k) cout << "YES";
    
    else cout << "NO";

    cout << endl;

    return 0;
}