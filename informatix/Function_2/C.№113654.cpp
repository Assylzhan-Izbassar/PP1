#include <iostream>

using namespace std;

int count_of_digits(string s){
    size_t count = 0;

    for(size_t i=0; i < s.size(); ++i){
        if(isdigit(s[i]))count++;
    }
    return count;
}

int main(){

    string s;
    cin >> s;

    cout << count_of_digits(s) << endl;
    return 0;
}