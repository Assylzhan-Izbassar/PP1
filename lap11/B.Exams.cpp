#include <iostream>
#include <vector>

using namespace std;

struct students{
    string name;
    string surname;
    int math;
    int pp1;
    int discrete_structures;

    void read(){
        cin >> name >> surname >> math >> pp1 >> discrete_structures;
    }
};

int main(){

    int n;
    double x;
    cin >> n >> x;

    vector<students> v;

    students a;

    for(int i=0; i < n; i++){
        a.read();
        v.push_back(a);
    }

    //double f = 57;

    //double b = f/5;

    //cout << b << endl;

    double j;

    double k;

    for(int i=0; i < v.size(); i++){
        k = 0; j = 0;
        j = (v[i].math + v[i].pp1 + v[i].discrete_structures);
        k = j/3;
        if(k > x){
            cout << v[i].name << " " << v[i].surname << endl;
        }
    }

    return 0;
}