#include <iostream>
#include <map>

using namespace std;

int main(){ 

    map<char, bool> m;
    string A, B, C;
    cin >> A >> B >> C;

    for(int i=0; i < A.size(); i++){
        m[A[i]] = true;
    }

    for(int i=0; i < B.size(); i++){
        m[B[i]] = true;
    }

    for(int i =0;i < C.size(); i++){
        m[C[i]] = true;
    }

    for(char i ='a'; i <= 'z'; i++){
        if(m[i] == false){
            cout << i;
        }
    }

    cout << endl;

    return 0;
}