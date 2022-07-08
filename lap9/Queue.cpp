#include <iostream>
#include <deque>

using namespace std;

int main(){ 
    
    deque<char> q;

    string s;
    cin >> s;

   
    for(int i=0; i < s.size(); i++){
        if(q.size() == 0) q.push_back(s[i]);
        else if(q.back() == '1' && s[i] == '1'){
            q.pop_back();
        }
        else q.push_back(s[i]);
    }

    while(q.size() != 0){
        cout << q.front();
        q.pop_front();
    }

    cout << endl;
    
    return 0;
}