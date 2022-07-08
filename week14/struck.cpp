#include <iostream>

using namespace std;

struct number{
    int a,b;

    number(int _a, int _b){
        a = _a;
        b = _b;
    }

    number(){

    }

    void read(){
        cin >> a >> b;
    }

    void print(){
        cout << a << " " << b << endl;
    }
};

int main(){

    number n(1,2);

    number k;

    k.read();

    n.print();

    k.print();

    return 0;
}