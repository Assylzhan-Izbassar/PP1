#include <iostream>
#include <map>

using namespace std;

int main(){

    multimap<int,int> m;
    int n, k;
    cin >> n >> k;

    int i,j;

    for(int i=1; i <=k; i++){
        cin >> i >> j;
        m.insert(make_pair(i,j));
    }

    //int i1,j1;

    cin >> i >> j;

    multimap<int,int> :: iterator it;

    for(it = m.begin();it != m.end(); it++){
       if(i == (*it).first && j == (*it).second){
           cout << "YES" << endl;
           return 0;
       }
    }

    cout << "NO" << endl;

    return 0;
}