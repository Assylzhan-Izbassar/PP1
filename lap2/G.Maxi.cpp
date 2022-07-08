#include <iostream>

using namespace std;

int main(){ 

    int n;
    cin >> n;

    int maxi=0;

    int k;

    for(int i=1; i <= n; i++){
        cin >> k;
        if(k > maxi){
            maxi = k;
        }
    }

    cout << maxi << endl;

    return 0;
}