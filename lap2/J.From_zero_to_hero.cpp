#include <iostream>

using namespace std;

int main(){ 

    int n;
    cin >> n;

    int a[n];
    int count = 0; 

    for(int i=0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i=0; i < n; i++){
        while(a[i]>=1){

            if(a[i] % 10 == 0)count++;
            a[i] = a[i] / 10; 

        }
    }

    cout << count << endl;

    return 0;
}