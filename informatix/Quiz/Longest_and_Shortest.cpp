#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){

    map<string, int> m;
    vector<string> v;
    map<string, int>::iterator it;
    int n;
    cin >> n;

    string s;

    for(int i=0; i < n; i++){
        cin >> s;
        m[s]++;
        v.push_back(s);

    }
    int maxi_size = -1;
    string max, min;
    int mini = 1e6;

    int e = 0;
    string h;
    

    for(int i=0; i < v.size(); i++){
        int k = v[i].size();
        
        if(k > maxi_size){
            for(it = m.begin(); it != m.end(); it++){
                if(v[i] == (*it).first){
                    maxi_size = k;
                    max = v[i];
                    e = (*it).second;
                }

            }
                    
        }
        else if(k == v[i].size()){
                    if(e < (*it).second){
                        max = v[i];
                        e = (*it).second;
                    }
        }
    }
        
    

    cout << e << " " << max << endl;

    int j = 0;
    string r;

    for(int i=0; i < v.size(); i++){
        int f = v[i].size();
        if(f < mini){
            for(it = m.begin(); it != m.end(); it++){
                if(j < (*it).second){
                    j =(*it).second;
                    r = (*it).first;
                    mini = f;

                }
            }
        }
    }

    cout << j << " " << r << endl;


    int count_max, count_min;

    for(it = m.begin(); it != m.end(); it++){
        if((*it).first == max){
            count_max = (*it).second;
        }
        if((*it).first == r){
            count_min = (*it).second;
        }
    }

    cout << count_max << " " << count_min << endl;
   
    if(count_min >= count_max){
        cout << "My type!" << endl;
    }
    else cout << "Not my type" << endl;

    return 0;
}