#include <iostream>
#include <vector>

using namespace std;

string res = "";
vector<string> v;

void first_string(string s){
    if(s[0] == ' '){
        for(size_t i=1; i < s.size(); ++i){
            if(i == s.size() - 1){
                res += s[s.size() -1];
                v.push_back(res);
            }
            if(s[i] == ' '){
                v.push_back(res);
                res.clear();
            }
            else res += s[i];
        }
    }
    else{
        for(size_t i=0; i < s.size(); ++i){
            if(i == s.size() - 1){
                res += s[s.size() -1];
                v.push_back(res);
            }
            if(s[i] == ' '){
                v.push_back(res);
                res.clear();
            }
            else res += s[i];
        }
    }
}

int main(){

    string s;
    getline(cin, s);

    first_string(s);

    string maxi = v[0];

    for(size_t i=0; i < v.size(); i++){
        if(maxi.size() < v[i].size()){
            maxi = v[i];
        }
    }

    cout << maxi << endl;
    cout << maxi.size() << endl;

    return 0;
}