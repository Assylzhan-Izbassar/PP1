#include<iostream>
#include<map>

using namespace std;

int main(){

    map<string, double> m;

    size_t N,M; string s; double x;
    cin >> N;

    int sum = 0;

    for(size_t j = 0; j < N; ++j){
        cin >> M;
        for(size_t i=0; i < M; ++i){
            cin >> s >> x;
            sum += x;
            if(m.find(s) != m.end()){
                m[s] += x; 
            }
            else{
                m[s] = x;
            }
        }
    }

    map<string,double>::iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        (*it).second = ((*it).second*100)/sum;
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}