#include <iostream>

#include <set>

using namespace std;

int main(){

    set<int> s;

    int x;
    int n;
    cin >> n;

    for(int i=1; i <= n;i++){
        cin >> x;
        s.insert(x);
    }

    set<int>::reverse_iterator it;

    for(it = s.rbegin(); it != s.rend(); it++){
        cout << *it << " "; 
    }

    cout << endl;

    return 0;
}