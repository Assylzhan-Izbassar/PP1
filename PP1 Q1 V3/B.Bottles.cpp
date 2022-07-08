#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n], b[n];

    size_t sum = 0;

    for(int i=0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i=0; i < n; i++){
        cin >> b[i];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(sum <= (b[i] + b[j])){
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}