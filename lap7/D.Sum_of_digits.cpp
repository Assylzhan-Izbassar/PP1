#include <iostream>

using namespace std;

int Sum_of_digits(string s, int k, int i){
    if(i == s.size())return k;
    else{
        k += (s[i] - '0');
        return Sum_of_digits(s, k, i+1);
    }
}
    
int main(){ 

    string n;
    cin >> n;

    cout << Sum_of_digits(n,0,0) << endl;

    return 0;
}