#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    int count = 0;

    for(int i=0; i < s.size(); i++){
        if(s[i] == '3' && s[i+1] == '7' && s[i+2] == '5'){        
            count++;
            s.erase(i, 3);  
            i--;         
        }
    }

    cout << count << endl;


    return 0;
}