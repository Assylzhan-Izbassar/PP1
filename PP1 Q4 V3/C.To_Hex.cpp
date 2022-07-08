#include <iostream>
#include <sstream>

using namespace std;

int main(){

    string n;
    cin >> n;

    stringstream ss;
    int k;
    ss << n; ss >> k;
    string res = " ";

    while(k > 0){
        res = char(char(k % 16) + '0') + res;
        k = k/16;
    }

    for(int i=0; i < res.size(); i++){
        if(res[i] == ':'){
            res[i] = 'A';
        }
        if(res[i] == ';'){
            res[i] = 'B';
        }
        if(res[i] == '<'){
            res[i] = 'C';
        }
        if(res[i] == '>'){
            res[i] = 'D';
        }
        if(res[i] == '?'){
            res[i] = 'E';
        }
        if(res[i] == '@'){
            res[i] = 'F';
        }
    }

    cout << res << endl;

    return 0;
}