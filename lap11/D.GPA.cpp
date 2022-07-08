#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student{
    string name, surname;
    double gpa;

    void read(){
        cin >> name >> surname >> gpa;
    }

    void print(){
        cout << name << " " <<  surname << "\n";
    }
};

bool f(Student a, Student b){
    if(a.gpa < b.gpa)return true;
    return false;
}

void f1(Student x){
    cout << x.name << " " << x.surname << "\n";
}

vector<Student> v;

int main(){

    int n;
    cin >> n;

    Student s;

    for(size_t i=0; i < n; i++){
        s.read();
        v.push_back(s);
    }

    sort(v.begin(), v.end(), f);

    for_each(v.begin(), v.end(), f1);

    // for(size_t i=0; i < v.size(); i++){
    //     v[i].print();
    // }

    return 0;
}