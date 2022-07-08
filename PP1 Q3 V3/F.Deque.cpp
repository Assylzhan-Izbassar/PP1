#include <iostream>
#include <deque>

using namespace std;

int main(){

    deque<int> deg;
    char c; int k;

    while(cin >> c){
        if(c == '!')break;

        if(c == '+'){
            cin >> k;
            deg.push_front(k);
        }
        if(c == '-'){
            cin >> k;
            deg.push_back(k);
        }
        
        if(c == '*'){
            if(deg.empty()){
                cout << "error" << endl;
            }
            else{
                cout << deg.front() + deg.back() << endl;
                if(deg.size() == 1){
                    deg.pop_front();
                }
                else if(deg.size() > 1){
                    deg.pop_back(); deg.pop_front();
                }
            }
        }
    }   

    return 0;
}