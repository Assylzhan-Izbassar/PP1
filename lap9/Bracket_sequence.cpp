#include <iostream>
#include <stack>

using namespace std;

int main(){

    string s;
    cin >> s;

    stack<char> st;

    for(int i=0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                cout << "NO" << endl;
                return 0;
            }
            st.pop();    
        }
    }

    if(st.empty())cout << "YES";
    else cout << "NO";

    cout << endl;

    return 0;
}