#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector>
#include <map>
#include <set>
#include <queue>  

using namespace std;  

int main(){
    int n;

    cin >>n;
    
    vector <char> v;
    
    while(n>0){
    char s;
    if(n%16<10)
        s =n%16 + '0';
    else s = n%16 - 10 + 'A';
        v.push_back(s);
        n = n/16;
    }
    for(int i=v.size()-1; i>=0; i--) {
        cout << v[i];
    }
    return 0;
}