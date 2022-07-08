#include <iostream>

using namespace std;

int main(){ 

    int N;
    cin >> N;

    int x=1;

    while(x <= N){ 
       
       cout << x << " ";
       
       x *= 2;
    }

    return 0;
}