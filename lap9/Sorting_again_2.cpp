#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){ 

    multiset<int> a;
    multiset<int> b;
   
    vector<int> v;

    int n;
    cin >> n;

    int x; 

    for(int i=0; i < n; i++){
        cin >> x;
        v.push_back(x);
        if(x % 2 == 0){
            a.insert(x);
        }
        else b.insert(x);
        /*(1)if(a == b)continue;
        x = n;
        sort(b.begin(), b.end());
        if(a == b)continue;
        else v.push_back(x);*/

        //sort(v.begin(), v.end());
    }

    multiset<int>::reverse_iterator it;

    for(it = a.rbegin(); it != a.rend(); it++){
        cout << *it << " ";
    }

    multiset<int>::iterator it2;

    for(it2 = b.begin(); it2 != b.end(); it2++){
        cout << *it2 << " ";
    }

    cout << endl;

    return 0;
}