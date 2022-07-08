#include <iostream>

using namespace std;
int sum = 1;
int degree(int n,int i){
    if(i <= n){
        sum = sum * 2;
        i++;
        return degree(n,i);
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << degree(n,1);
}


