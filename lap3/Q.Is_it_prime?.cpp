#include <iostream>

using namespace std;

int main(){ 

    int x;
    cin >> x;

    bool res = true;

    for(int i=2; i < x; i++){
        if(x == 2){
            res = true;
            break;
        }
        if(x % i == 0){
            res = false;
            break;
        }      
    }

    if(res == true){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    return 0;
}