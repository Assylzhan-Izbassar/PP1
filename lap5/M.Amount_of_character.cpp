#include <iostream>

using namespace std;

int main(){
     
    string s;
    char x; 
    int n;

    cin >> s >> x >> n;

    int count = 0;

    for(int i=0; i < s.size(); i++){
        if(s[i] == x)count++;
    }

    if(count == n){
        cout << "YES";
    }
    else cout << "NO";

    cout << endl;
    
    return 0;
}