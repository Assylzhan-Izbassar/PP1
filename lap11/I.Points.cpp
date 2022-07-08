#include <iostream>
#include <vector>

using namespace std;

struct coordinates{
    int x,y,z;

    void read(){
        cin >> x >> y >> z;
    }
};

bool fx(coordinates a, coordinates b){
    if(a.x > b.x)return true;
    else return false;
}
bool fy(coordinates a, coordinates b){
    if(a.y > b.y)return true;
    else return false;
}
bool fz(coordinates a, coordinates b){
    if(a.z > b.z)return true;
    else return false;
}

vector<coordinates> v;

int main(){

    int n;
    cin >> n;

    coordinates k;

    for(size_t i=1; i <= n; ++i){
        k.read();
        v.push_back(k);
    }

    sort(v.begin(), v.end(), fx);
    sort(v.begin(), v.end(), fy);
    sort(v.begin(), v.end(), fz);

    for(size_t i=0; i < v.size(); i++){
        cout << v[i].x + v[i].y + v[i].z << "\n";
    }

    return 0;
}