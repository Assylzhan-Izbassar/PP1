#include <iostream>
#include <map>

using namespace std;

int main(){

    multimap<pair<string,int>, pair<string,int> > m;
    map<pair<string,int>, pair<string,int> > :: iterator it;
    pair<string,int> a,b;

    int n;
    cin >> n;

    string s,k; int x,y;

    for(size_t i=0; i < n; ++i){
        cin >> s >> x >> k >> y;
        a = make_pair(s,x);  
        b = make_pair(k,y); 
        if(m.find(a) == m.end()){
            m.insert(make_pair(a,b)); 
        }
        else{
            for(it = m.begin(); it != m.end(); ++it){
                if((*it).second.first != b.first){
                    m.insert(make_pair(a,b)); 
                }
                else{
                    if((*it).second.second != b.second){
                        m.insert(make_pair(a,b)); 
                    }
                    else{
                        continue;
                    }
                }
            }
        }
    }

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first.first << " and " << (*it).second.first << " " << (*it).first.second + (*it).second.second << endl;
    }

    return 0;
}