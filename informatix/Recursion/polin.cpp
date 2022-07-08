#include <iostream>

using namespace std;

int Polin(int s){
    if(s > 0){
        return Polin(s/10);
        cout << s/10 << " ";
    }
    else{
        
        return s;
    }
}

int main(){

    int c;
    cin >> c;

    cout << Polin(c) << endl;
    return 0;
}