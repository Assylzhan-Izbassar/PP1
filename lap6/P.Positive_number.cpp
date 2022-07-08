#include <iostream>

using namespace std;

void Positive(int n){
    cout << abs(n) << endl;
}

int main(){
    int n;
    cin >> n;

    Positive(n);
    
    return 0;
}