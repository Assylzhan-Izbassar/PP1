#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct circle{
    int x,y,r;

    void read(){
        cin >> x >> y >> r;
    }
    void print(){
        cout << x << " " << y << " " << r << endl;
    }
};

bool compair(circle a, circle b){
    
    int r = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));

    if(((a.r +b.r) >= r) && ((a.r + r) >= b.r) && ((b.r + r) >= r)){
        return true;
    }
    else return false;
}

vector<circle> v;

int main(){

    int n, i1,i2;
    cin >> n;

    circle k;

    for(size_t i=1; i <=n; ++i){
        k.read();
        v.push_back(k);
    }

    cin >> i1 >> i2;

    if(compair(v[i1-1], v[i2-1])){
        cout << "YES\n";
    }
    else cout << "NO\n";

    return 0;
}