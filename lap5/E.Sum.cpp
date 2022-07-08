#include <iostream>

using namespace std;

int main(){ 

    string str;
    cin >> str;

    int sumE = 0, sumO = 0;

    for(int i=0; i < str.size(); i++){
        if(i % 2 == 0){
            sumE += (str[i] - 48);
        }
        else sumO += (str[i] - 48);
    }

    if(sumE == sumO){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

    return 0;
}