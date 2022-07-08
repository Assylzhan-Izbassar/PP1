#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> s;

    int n;

    while(cin >> n){
        if(n == 0)break;
        s.insert(n);
    }

    set<int> :: reverse_iterator it;

    for(it = s.rbegin(); it != s.rend(); it++){
        cout << (*it) << endl;
        break;
    }

    return 0;
}