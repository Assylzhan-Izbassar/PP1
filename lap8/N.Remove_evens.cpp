#include <iostream>
#include <set>

using namespace std;

int main(){ 

    set<int> s;

    int x;

    int n;
    cin >> n;

    for(int i=0; i < n; i++){
        cin >> x;
        s.insert(x);
    }

    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++){
        if(*it % 2 == 0)continue;
        cout << *it << " ";
    }

    return 0;
}