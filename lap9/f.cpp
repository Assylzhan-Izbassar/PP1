#include <iostream>
#include <map>

using namespace std;

int main(){
    string x;
    map<string,int> m;
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        string x,g;
        cin>>x;
        m[x]++;
    }
    string s,l;
    int mx = -1;
    int maxx = -1;
    int mn = 9999999;
    int minn = 99999999;
    map<string,int>::iterator it;
    for(it= m.begin();it != m.end();it++){
        string x;
        x = (*it).first;
        if(mx < x.size()){
            l = (*it).first;
            mx = x.size();
            maxx = (*it).second;
        }else if(mx == x.size()){
            if(maxx < (*it).second){
                l = (*it).first;
                maxx = (*it).second;
                mx=x.size();
            }
        }

        if(mn > x.size()){
            mn = x.size();

            s = (*it).first;
            minn = (*it).second;
        }
        else if(mn == x.size()){
            if(minn > (*it).second){
                s = (*it).first;        
                minn = (*it).second;
                mx=x.size();
            }
        }
    }
    cout << l << " " << s;
    if(m[s] >= m[l]) cout << "My type";
    else cout << "Not my type";
return 0;
}