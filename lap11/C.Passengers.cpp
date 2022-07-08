#include <iostream>
#include <vector>

using namespace std;

struct Passengers{
    string name;
    int number_of_things;
    int total_weight;

    void read(){
        cin >> name >> number_of_things >> total_weight;
    }

    void print(){
        cout << name << "\n";
    }

};

vector<Passengers> v;

int main(){

    int n;
    cin >> n;

    Passengers m;

    for(size_t i = 1; i <= n; i++){
        m.read();
        v.push_back(m);
    }
    
    size_t number = v[0].number_of_things;

    for(size_t i = 0; i < v.size(); i++){
        if(v[i].number_of_things > number){
            number = v[i].number_of_things;
        }
    }

    for(size_t i = 0; i < v.size(); i++){
        if(number == v[i].number_of_things){
            v[i].print(); 
            return 0;
        }
    }
       
    return 0;
}