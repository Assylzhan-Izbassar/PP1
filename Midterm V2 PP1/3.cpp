#include <iostream>

using namespace std;

int f(int a,int b){
    if(a>b)return 0;
    return b;
}

int main(){

    int a = 5;
    int b = 10;

    bool y = f(a,b);
    int k = (a*b) - y;

    cout << k << endl;




    return 0;
}