#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    double sum = 0;

    for(size_t i=0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    printf("%.2f",sum/n);

    cout << endl;

    return 0;
}