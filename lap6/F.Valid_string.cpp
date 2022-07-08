#include <iostream>

using namespace std;

bool Valid(string s, int n){

    int count = 0;

    for(int i=0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9')count++;
    }

    /*if(count >= n)return true;
    
    else return false;*/
    
    return count >= n;

}

int main(){

    string s;
    int n;
    cin >> s >> n;

    if(Valid(s,n))cout << "YES";
    
    else cout << "NO";

    cout << endl;

    return 0;
}