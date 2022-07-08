#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i=0; i< n; i++){
        cin >> a[i];
    }

    bool res = true;

    for(int i = 1; i < n; i++){
        if(a[i] == a[n -1 -i]){
            res = true;
        }
        else{
            cout << "Not palindrome" << endl;
            return 0;
        }      
    }

    cout << "Palindrome" << endl;
    
    return 0;
}