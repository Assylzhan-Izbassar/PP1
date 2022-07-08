#include <iostream>
#include <set>

using namespace std;

set<int> s;

bool Add(int n){
    size_t a = 1, b = 1;
    if(n == 1)return true;
    while(s.size()<= 1e6){
        a+=3;
        s.insert(a);
        b+=5;  
        s.insert(b);
    }
    if(s.find(n) == s.end())return false;
    else return true;
}

int main(){

    int n;
    cin >> n;

    if(Add(n)){
        cout << "YES\n";
    }
    else cout << "NO\n";

    return 0;
}