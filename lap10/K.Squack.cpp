#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<char> st;

    string s;

    cin >> s;

    for(int i=0; i < s.size(); i++){
        st.push(s[i]);
        if(s[i] == '1' || s[i] == '3' && s[i+1] == '6'){
            st.pop();
        }
    }
    

    return 0;
}