#include <iostream>
#include <vector>

using namespace std;

struct Students{
    string name, surname;
    double gpa;

    void read(){
        cin >> name >> surname >> gpa;
    }
};

vector<Students> v;

int main(){

    size_t n;
    cin >> n;

    Students s;

    for(size_t i=0; i < n; i++){
        s.read();
        v.push_back(s);
    }

    size_t a,b;

    cin >> a >> b;

    if(v[a-1].name != v[b-1].name){
        cout << "NO" << "\n";
        return 0;
    } 
    else{
        if(v[a-1].surname != v[b-1].surname){
            cout << "NO" << "\n";
            return 0;
        }
        else{
            if(v[a-1].gpa != v[b-1].gpa){
                cout << "NO" << "\n";
                return 0;
            }
        }
    }

    cout << "YES" << "\n";

    return 0;
}