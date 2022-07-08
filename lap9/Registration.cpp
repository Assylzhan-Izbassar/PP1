#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<string> reg;

    string s;
    int n;
    cin >> n;

    for(int i=1; i <= n; i++){
        cin >> s;
        reg.push(s);
    }

    string k =  "  ";

    for(int i=1; i <= n; i++){
        
        while(!reg.empty()){

            if(k.find(reg.front()) == string::npos){
                cout << "new user added" << endl;
            }
            else cout << "user already exists" << endl;;
    
            k += reg.front();
        
            reg.pop();
        }
    }

    return 0;
}