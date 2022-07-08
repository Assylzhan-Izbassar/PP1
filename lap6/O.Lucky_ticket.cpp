#include <iostream>
#include <sstream>

using namespace std;

bool Lucky_ticket(string s){
    int sum = 0, k;
    stringstream ss;
    ss << s; ss >> k;
    for(size_t i=0; i < s.size(); ++i){
        sum += (s[i] - '0');
    }
    if(sum % (k%10) == 0)return true;
    else return false;
}

int main(){

    string s;
    cin >> s;

    if(Lucky_ticket(s)){
        cout << "Yes\n";
    }
    else cout << "No\n";
    
    return 0;
}