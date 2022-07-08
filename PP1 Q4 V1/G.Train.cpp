#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=1; i <=n; i++){
        cin >> arr[i];
    }

    int v;
    cin >> v;

    double distance = 0;

    for(int i=1; i <=n; i++){
        distance = distance + abs(arr[i+1] - arr[i]);
        if(i == n - 1)break;
    }

    printf("%.2f",distance/v);

    cout << endl;
    
    return 0;
}