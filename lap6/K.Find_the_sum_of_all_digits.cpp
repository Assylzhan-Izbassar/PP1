#include <iostream>

using namespace std;

int Sum_of_digits(int n){
    size_t sum = 0;
    while(n > 0){
        sum += (n%10);
        n /= 10;
    }
    return sum;
}

int main(){

    int n;
    cin >> n;

    cout << Sum_of_digits(n) << endl;

    return 0;
}