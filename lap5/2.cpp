#include <iostream>

using namespace std;

int count(int n, int a[], int b[]){
    int cnt = 0;
    for(int i=0; i < n; i++){
        if(a[i] != -1)
        for(int j=0; j < n; j++){
            if(a[i] == b[j]){
                cnt++;
                b[j] = -1;
                break;
            }
        }

        
    }
    return cnt;
}

int main(){

    int n;
    cin >> n;

    int a[n], b[n];

    for(int i=0; i < n; i++){
        cin >> a[i];
    }

    for(int i=0; i < n; i++){
        cin >> b[i];
    }

    cout << count(n, a, b) << endl;



    return 0;
}