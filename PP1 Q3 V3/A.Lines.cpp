#include <iostream>
#include <cmath>
#include <set>

using namespace std;

int main(){

    set<double> s;

    int n;
    cin >> n;

    int x, y, x1, y1;

    for(size_t i = 1; i <= n; i++){
        cin >> x >> y >> x1 >> y1;
        double k = sqrt((x1 - x)*(x1 - x) + (y1 - y)*(y1 - y));
        s.insert(k);
    }

    cout << s.size() << endl;
    
    return 0;
}
