#include <iostream>

using namespace std;

int main(){ 

    int n;
    cin >> n;

    int k;

    int cnt=0;

    for(int i=0; i < n; i++){
        
        cin >> k;

        if(k % 10 == 7){
            cnt = cnt + 1;
        }
    }

    cout << cnt << endl;

    return 0;
}