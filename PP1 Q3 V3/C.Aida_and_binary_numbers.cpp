#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<char> q;

    string s;
    cin >> s;

    for(size_t i=0; i < s.size(); ++i){
        if(s[i] == '0'){
            q.push(s[i]);
        }
        else{
            if(s[i+1] == '1'){
                q.push('0');
                i++;
            }
            else q.push(s[i]);
        }
    }

    while(!q.empty()){
        cout << q.front();
        q.pop();
    }

    cout << endl;

    return 0;
}