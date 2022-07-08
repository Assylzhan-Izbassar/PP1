#include <iostream>

using namespace std;

void Percent_of_girls(double k, double j){
    cout << ((j*100)/k) << endl;
}

int main(){

    double n,m;
    cin >> n >> m;

    Percent_of_girls(n,m);

    return 0;
}