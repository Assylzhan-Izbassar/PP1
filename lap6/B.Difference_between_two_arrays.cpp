#include <iostream>

using namespace std;

int d[100100];

void arr(int n, int a[],int b[]){
    for(int i=0; i < n; i++){
        d[i] = abs(a[i]-b[i]);
    }   
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

    arr(n, a, b);

    for(int i=0; i < n; i++){
        cout << d[i] << " ";
    }

    cout << endl;    

    return 0;
}