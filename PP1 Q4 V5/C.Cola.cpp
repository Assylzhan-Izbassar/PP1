#include <iostream>

using namespace std;

int main(){

    size_t cola,n;
    cin >> cola >> n;

    int arr[n];

    size_t sum_of_students = 0;

    for(size_t i=0; i < n; i++){
        cin >> arr[i];
        sum_of_students += arr[i];
    }

    if(sum_of_students <= cola){
        cout << "YES";
    }
    else cout << "NO";
    
    cout << endl;
 
    return 0;
}