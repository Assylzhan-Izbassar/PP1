#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){ 

    vector<int> v;

    int x;

    while(cin >> x){
        if(x == 0)break;
        v.push_back(x);
    }

    cout << v.size() << endl;

    vector<int>::iterator it = v.begin();

    cout << *it << endl;

    vector<int>::iterator a;

    for(a = v.begin(); a != v.end(); a++){
        cout << *a << " ";
    }

    cout << endl;


    return 0;
}