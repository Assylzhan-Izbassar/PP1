#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int, int> m;

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i < n; i++){
        cin >> arr[i];
        m[arr[i]]++;
    }
cout << (--(--(m.end())))->second << endl;
    // map<int, int> :: reverse_iterator it;

    // for(it = m.rbegin(); it != m.rend(); it++){
    //     cout << (*it).first << "\n";
        return 0;
    }
    
