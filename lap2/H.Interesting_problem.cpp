#include <iostream>

using namespace std;

int main(){ 

    int n;
    cin >> n;

    int cnt1=0, cnt2=0;

    int k;

    for(int i=0; i < n; i++){
        
        cin >> k;

        if(k % 2 == 0){
            cnt1 = cnt1 + 1; 
        }
        else cnt2 = cnt2 + 1;
    }

    cout << cnt1 <<  " " << cnt2 << endl;

    return 0;
}