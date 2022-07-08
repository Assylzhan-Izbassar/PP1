#include <iostream>

using namespace std;

int main(){ 

    string s;
    cin >> s;

    int count = 0, count1 = 0;

    for(int i = 1; i < s.size(); i++){
        if(s[0] == s[i]){
            count++;
            s[i] = '*';
        }
        //cout << s[i];
    }

    //cout << s[0] << endl;

    //cout << count << endl;

    for(int i = 1; i < s.size(); i++){
        if(s[i] != '*'){
            for(int j = i + 1; j < s.size(); j++){
                if(s[i] == s[j]){
                    count1++;
                    //cout << count1 << endl;
                    s[j] = '*';
                    //cout << s[j];
                }
            }
            if(count != count1){
                    cout << "NO" << endl;
                    exit(0);
                }
        }
        count1 = 0;
    }

    cout << "YES" << endl;

    return 0;
}