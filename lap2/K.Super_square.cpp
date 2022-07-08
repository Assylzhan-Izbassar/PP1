#include <iostream>

using namespace std;

int main(){ 

    int N;
    cin >> N;

    int x=1;
    int k=1;
    int n=1;

    while(n <= N){ 
        cout << n << endl;
        x = x + 1;
        k = k + 1;
        n = x * k;
    }

    return 0;
}