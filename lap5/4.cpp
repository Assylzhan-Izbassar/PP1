#include <iostream>

using namespace std;

string str(string s, int t){
    for(int i= 0; i < s.size(); i++){
        int cnt = 0;
        if(s[i] >= '0' && s[i] <= '9'){
            for(int j = i; j < s.size(); j++){
                if(s[j] >= '0' && s[j] <= '9'){
                    cnt++;
                }
                else{
                    break;
                }
            }
            if(cnt >= t) return "Yes";
        }
    }
    return "No";
   
}

int main(){
    

    return 0;
}