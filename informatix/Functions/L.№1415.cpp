#include <iostream>

using namespace std;

void Code(string s, int k){
    for(size_t i=0; i < s.size(); ++i){
        if(s[i] == 'A') s[i] = s[i] + 26 - k;
        else if(s[i] == 'B'){
            if(k >= 2 && k <= 10)s[i] = s[i] + 26 - k;
            else s[i] = char(int(s[i]) - k);
        }
        else if(s[i] == 'C'){
            if(k >= 3 && k <= 10) s[i] = s[i] + 26 - k;
            else s[i] = char(int(s[i]) - k);
        }
        else if(s[i] == 'D'){
            if(k >= 4 && k <= 10) s[i] = s[i] + 26 - k;
            else s[i] = char(int(s[i]) - k);
        }
        else if(s[i] == 'E'){
            if(k >= 5 && k <= 10) s[i] = s[i] + 26 - k;
            else s[i] = char(int(s[i]) - k);
        }
        else if(s[i] == 'F'){
            if(k >= 6 && k <= 10) s[i] = s[i] + 26 - k;
            else s[i] = char(int(s[i]) - k);
        }
        else if(s[i] == 'G'){
            if(k >= 7 && k <= 10) s[i] = s[i] + 26 - k;
            else s[i] = char(int(s[i]) - k);
        }
        else if(s[i] == 'H'){
            if(k >= 8 && k <= 10) s[i] = s[i] + 26 - k;
            else s[i] = char(int(s[i]) - k);
        }
        else if(s[i] == 'I'){
            if(k >= 9 && k <= 10) s[i] = s[i] + 26 - k;
            else s[i] = char(int(s[i]) - k);
        }
        else if(s[i] == 'J'){
            if(k == 10) s[i] = s[i] + 26 - k;
            else s[i] = char(int(s[i]) - k);
        }
        else if(s[i] >= 'K' && s[i] <= 'Z') s[i] = char(int(s[i]) - k);
        cout << s[i]; 
    }
}

int main(){

    string s; int k;
    cin >> s >> k;

    Code(s,k);

    cout << endl;

    return 0;
}