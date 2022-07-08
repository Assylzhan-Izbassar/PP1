#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> v;

void Arithmetic_progression(int n, int i){
    if(i == n)return fill(begin(v)+i-1, end(v), i);
    else{
        fill(begin(v)+i-1, end(v), i);
        return Arithmetic_progression(n, i+1);
    }
}

int main(){

    int n;
    cin >> n;

    Arithmetic_progression(n,1);

    for(size_t i=0; i < v.size(); ++i){
        
    }

    return 0;
}