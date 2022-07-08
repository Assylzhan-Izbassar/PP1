#include <iostream>
#include <deque>

using namespace std;

int main(){

    deque<string> deg;

    int n;
    cin >> n;

    string s;
    int k;

    for(int i=0; i < n; i++){
        cin >> s >> k;
        if(k == 1){
            deg.push_front(s);
        }
        else if(k == 0){
            deg.push_back(s);
        }
    }

    deque<string>::iterator it;
    for(it = deg.begin(); it != deg.end(); it++){
        cout << (*it) << " ";
    }

    cout << endl;
    
    return 0;
}