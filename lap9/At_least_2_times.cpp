#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){

    map<int, int> m;

    int n;
    cin >> n;

    int x;

    int count = 0;

    for(int i=0; i < n; i++){
        cin >> x;
        m[x]++;
    }

    /*(4)if(A[i] == A[i+1] - 1) count++;
        else{
            if(count != 1){
                cout << count;
                count = 1;
                continue;
            }
            cout << A[i];
            count = 1;
        }

    */

    int k = 0;

    map<int,int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){   
            k = (*it).second / 2;
            count += k;   
        //cout << (*it).first << " " << (*it).second << endl;
    }


    cout << count << endl;

    return 0;
}