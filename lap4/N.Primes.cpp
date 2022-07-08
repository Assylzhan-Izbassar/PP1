#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;

    bool res = true;

    for(size_t i = 2; i <= n; i++){
        for(size_t j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                res = false;
                break;
            } 
            else res = true;         
        }
        if(res == true){
            cout << i << " is " << "prime" << endl; 
        }
    }

    return 0;
}