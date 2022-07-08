#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;
    vector<int> v1;

    int n;
    cin >> n;

    int x,y;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        v.push_back(x);
        v1.push_back(y);
    }

    for(int i=0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(v[i] > v[j]){
                swap(v[i], v[j]);
                swap(v1[i], v1[j]);
            }
            else if(v[i] == v[j]){
                if(v1[i] > v1[j]){
                    swap(v[i], v[j]);
                    swap(v1[i], v1[j]);
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << v[i] << " " << v1[i] << "\n";
    }

    
    return 0;
}