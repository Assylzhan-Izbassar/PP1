#include <iostream>
#include <vector>

using namespace std;

struct Films{
    string name_of_the_film, name_of_the_director;
    int cost;

    void read(){
        cin >> name_of_the_film >> name_of_the_director >> cost;
    }
};

vector<Films> v;

int main(){

    int n;
    cin >> n;

    Films f;

    for(size_t i=0; i < n; i++){
        f.read();
        v.push_back(f);
    }

    size_t count = 0;

    for(size_t i=0; i < v.size() - 1; i++){
        for(size_t j=i+1; j < v.size(); j++){
            if(v[i].name_of_the_director == v[j].name_of_the_director){
                v[j].name_of_the_director = "check";
            }
        }
    }

    for(size_t i =0; i < v.size(); i++){
        if(v[i].name_of_the_director != "check") count++;
    }

    cout << count << endl;

    return 0;
}