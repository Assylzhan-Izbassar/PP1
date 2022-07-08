#include <iostream>

using namespace std;

string res = "";

string compair(string r, string s){
    string res1 = "";
    for(size_t i = res.size(); i < s.size(); ++i){
        if(s[i] != ' '){
            res1 += s[i];
        }
        else if(i == s.size() - 1){
            res1 += s[s.size() -1];
        }
        else{
            if(r.size() < res1.size()){
                r.clear(); r = res1; res1.clear();
            }
            else if(r.size() == res1.size()){
                res1.clear();
            }
            else{
                res1.clear();
            }
        }
    }
    return r;
}

string first_string(string s){
    if(s[0] == ' '){
        for(size_t i=1; i < s.size(); ++i){
            if(s[i] == ' ')break;
            else res += s[i];
        }
    }
    else{
        for(size_t i=0; i < s.size(); ++i){
            if(s[i] == ' ')break;
            else res += s[i];
        }
    }
    return res;
}

int main(){

    string s;
    getline(cin, s);

    string first = first_string(s);

    string maxi = compair(first, s);

    cout << maxi << endl;
    cout << maxi.size() << "\n";

    return 0;
}