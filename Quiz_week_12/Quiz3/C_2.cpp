#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){ 

    string A, B, C;
    cin >> A >> B >> C;

    map<char, int> m;
    set<char> s,s1,s2;
    set<char>::iterator it;

    for(int i=0; i < A.size(); i++){
        s.insert(A[i]);
    }

    for(int i=0; i < B.size(); i++){
        s1.insert(B[i]);    
    }
    
    for(int i=0; i < C.size(); i++){
        s2.insert(C[i]);
        
    }

    for(it = s.begin(); it != s.end(); it++){
        m[(*it)]++;
    }

    for(it = s1.begin(); it != s1.end(); it++){
        m[(*it)]++;
    }
    for(it = s2.begin(); it != s2.end(); it++){
        m[(*it)]++;
    }

    map<char, int>:: iterator it1;
    for(it1 = m.begin(); it1 != m.end(); it1++){
        if((*it1).second == 3){
            cout << (*it1).first;
        }
    }

    cout << endl;

    return 0;
}