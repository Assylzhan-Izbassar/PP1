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

    int count = 0;

    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++){
        count++;
    }

    cout << count << endl;

    return 0;
}