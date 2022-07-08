#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int k = 0;

int generate_v(){
    int m = pow(k, k);
    k++;
    return m;
}

void f(int x){
    cout << x << " ";
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    generate(arr, arr + n, generate_v);

    for_each(arr, arr + n, f);

    return 0;
}

/*void f(long long int x){  
    cout <<  pow(x,x) << " ";    
}

int main(){

    int n;

    cin >> n;

    for(int i=0; i <=n; i++){
        string s = to_string(pow(i, i));
        int index = 0;
        for(int j = 0; j < s.size(); j++){

            if(s[j] == '.'){
                cout << " ";
                break;
            }else{
                cout << s[j];
            }
        }
    }
    
    return 0;
}*/