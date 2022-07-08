#include <iostream>

using namespace std;

int main(){ 

    string str;
    cin >> str;

    int count1 = 0;
    int count2 = 0;

    for(int i=0; i < str.size(); i++){
        
        if(str[i] >= 'a' && str[i] <= 'z')count1++;
        
        if(str[i] >= 'A' && str[i] <= 'Z')count2++;
    }

    cout << count1 << " " << count2 << endl;

    return 0;
}