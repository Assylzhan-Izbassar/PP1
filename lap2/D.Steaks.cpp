#include <iostream>

using namespace std;

int main(){

    int n,k;

    cin >> n >> k;

    int time_of_steak = 0;

    if(n <= k){
        cout << 2 << endl;
        return 0;
    }
    else if(n > k){
        if(n%k == 1){
            time_of_steak = 2 * (n/k) + (n%k);
        }
        else if(n < 2*k){
            time_of_steak = 4 * (n/k);
        }
        else time_of_steak = 2 * (n/k);
    }

    cout << time_of_steak << endl;

    return 0;
}