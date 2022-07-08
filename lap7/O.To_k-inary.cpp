#include <iostream>

using namespace std;

string res = " ";

string To_k_nary(int s,int k){
    if(s/k == 0){
        if(s%k >= 10){
            res = char(s%k + '7') + res;
            return res; 
        }
        else{
            res = char(s%k + '0') + res; 
            return res;
        }
    }
    else{
        if(s%k >= 10){
            res = char(s%k + '7') + res;
            return To_k_nary(s/k, k); 
        }
        else{
            res = char(s%k + '0') + res; 
            return To_k_nary(s/k, k);
        }
    }
}

int main(){

    int a,b;
    cin >> a >> b;

    cout << To_k_nary(a,b) << endl;

    return 0;
}