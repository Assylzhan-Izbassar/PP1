#include <iostream>

using namespace std;

int main(){

    string S;
    cin >> S;

    int count = 1;
    for(int i=0; i < S.size(); i++){
        if(S[i] == char(int(S[i+1] -1))) count++;
        else{
            if(count != 1){
                cout << count;
                count = 1;
            }
            else cout << S[i];
        }
    }
    return 0;
}