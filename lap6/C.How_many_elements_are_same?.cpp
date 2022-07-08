#include <iostream>

using namespace std;

int elements(int n, int a[], int b[]){
   
    int count = 0;

    int nums[101];

    for(int i = 1; i <= 100; ++i){
        nums[i] = 0;
    }

    /* example
    6
    4 3 1 2 4 1
    3 1 1 5 4 4
    */

    /*for(int i=0; i < n; i++){
        int x = a[i];
        int y = b[i];                  
        nums[x]++;
        nums[y]++;
    }

    for(int i = 1; i <= 100; ++i){
        cout << nums[i] << " ";
    }*/
    
    for(int i=0; i < n; i++){
        int x = a[i];
        nums[x]++;
    }
    
    for(int i=0; i < n; i++){
        int y = b[i];
        if(nums[y] > 0){
            count++;
            nums[y]--;

        }
    }
    
    return count;

}

int main(){  

    int n;
    cin >> n;

    int a[n], b[/*110000*/n];

    for(int i=0; i < n; i++){
        cin >> a[i];
    }

    for(int i=0; i < n; i++){
        cin >> b[i];
    }

    cout << elements(n, a, b) << endl;

    return 0;
}