#include <iostream>

using namespace std;
int d[100100],a[100100],b[100100];

void sum(int n){
    for(int i=0; i < n; i++ ){
        d[i]= abs(a[i] - b[i]);   
    }
}

int main(){ 

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    sum(n);
    for(int i = 0; i < n; i++){
        cout << d[i] << " ";
    }

    return 0;
}