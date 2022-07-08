#include <iostream>

using namespace std;

int main(){

    int n,m;

    cin >> n >> m;

    int a1[n], a2[m];

    size_t sum1 = 0, sum2 = 0;

    for(size_t i =0; i < n; i++){
        cin >> a1[i];
        sum1 += a1[i];
    }

    for(size_t j =0; j < m; j++){
        cin >> a2[j];
        sum2 += a2[j];
    }

    if(sum1 > sum2){
        cout << 1 << endl;
    }
    else if(sum1 < sum2){
        cout << 2 << endl;
    }
    else if(sum1 == sum2){
        cout << 0 << endl;
    }

    return 0;
}