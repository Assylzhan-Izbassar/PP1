#include <iostream>

using namespace std;

int main(){

    int length;
    cin >> length;

    int n;
    cin >> n;

    int house[n];

    for(int i=0; i < n; i++){
        cin >> house[i];
    }

    int first_house = house[0];
    int last_house = house[0];

    for(int i=0; i < n; i++){
        if(house[i] < first_house){
            first_house = house[i];
        }
        if(house[i] > last_house){
            last_house = house[i];
        }
    }

    int long_of_cable = last_house - first_house;

    if(long_of_cable < length){
        cout << "YES";
    }
    else cout << "NO";

    cout << endl;

    return 0;
}