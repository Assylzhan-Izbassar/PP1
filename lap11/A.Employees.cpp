#include <iostream>
#include <vector>
using namespace std;

struct Employees{
    string surname;
    int salary;
    int age;
    string date_of_birth;

    void read(){
        cin >> surname >> salary >> age >> date_of_birth;
    }
    void print(){
        cout << surname << " ";
    }
};


int main(){

    int n, x;
    cin >> n >> x;

    vector<Employees> v;

    Employees a;

    for(int i=0; i < n; i++){
        a.read();
        v.push_back(a);
    }

    int max = v[0].salary;

    for(int i=0; i < v.size(); i++){
        if(v[i].salary > max){
            max = v[i].salary;
        }
    }
    for(int i=0; i < v.size(); i++){
        if(v[i].salary == max){
            v[i].print(); cout << endl;
            //cout << v[i].surname << endl;
            break;
        }
    }

    int k = 0; 
    for(int i=0; i < v.size(); i++){
        k += v[i].age;
    }

    cout << k/n << endl;

    for(int i=0; i < v.size(); i++){
        if(v[i].salary > x){
            cout << v[i].surname << " ";
        }
    }

    cout << endl;

    return 0;
}