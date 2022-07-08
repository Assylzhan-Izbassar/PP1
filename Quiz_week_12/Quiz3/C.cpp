#include <iostream>
#include <set>

using namespace std;

int main(){

    string A, B, C;
    cin >> A >> B >> C;

    set<char> s;

    string check;

    string q = "";

    if(A.size() < min(B.size(), C.size())) check = A;
    else if(B.size() < min(A.size(), C.size())) check = B;
    else if(C.size() < min(A.size(), B.size())) check = C;

    for(int i=0; i < check.size(); i++){
        s.insert(check[i]);
    }

    set<char> :: iterator it;
    for(it = s.begin(); it != s.end(); it++){
        if(check == B){
            if(A.find(*it) == string::npos)continue;
            else if(C.find(*it) == string::npos)continue;
            else q = q + (*it);
        }
        else if(check == C){
            if(A.find(*it) == string::npos)continue;
            else if(B.find(*it)== string::npos)continue;
            else q = q + (*it);
        }
        else if(check == A){
            if(B.find(*it) == string::npos)continue;
            else if(C.find(*it) == string::npos)continue;
            else q = q + (*it);
        }
    }

    cout << q;

    cout << endl;

    return 0;
}