#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

     if(n == 255 ){
        cout << 254 << endl;
        return 0;
        
    }

    int arr[8];

    for(int i=0;i < 8; i++){
        arr[i] = 0;
    }

    
    for(int i = 0; i < 8; i++){
        arr[8 - 1 -i] = n % 2;
        n = n/2; 
    }



    

    for(int i=0; i < 8; i++){
        if(arr[i] == 0){
            arr[i] = 1;
            break;
        }   
    }

   

    int k = ((128*arr[0]) + (64*arr[1]) + (32*arr[2]) + (16*arr[3]) + (8*arr[4]) + (4*arr[5]) + (2*arr[6]) + (arr[7]));

    cout << k << endl;

    return 0;
}