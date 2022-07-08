#include <iostream>
#include <map>
using namespace std;

int main(){

    map<int,int>m;

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i < n; i++){
        cin >> arr[i];
        m[arr[i]]++;
    }

    int count = 0;

    map<int,int>::iterator it;
    for(it =m.begin(); it != m.end(); it++){
        count++;
        if(count == 2){
            cout << (*it).second << endl;
        }
    }


    return 0;
}