#include <iostream>

#include <queue>

using namespace std;

int main(){

    queue<string> q;

    int n;
    cin >> n;

    int x;
    string s;

    for(int i=0; i < n; i++){
        cin >> x;
        if(x == 1){
            cin >> s;
            q.push(s);
            cout << q.front() << endl;
        }
        else{
            q.pop();
            if(q.empty()){
                cout << "queue is empty" << endl;
            }
            else{
                cout << q.front() << endl;
            }
        }
    }
    
    return 0;
}