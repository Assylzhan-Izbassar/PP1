#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n][n];
    int array1[n];
    int array2[n];
    for(int k=0;k<n;k++){
        for(int j=0;j<n;j++){
            cin>>array[k][j];
            if(k==j){
                array1[j]=array[k][j];
            }
            else if(k+j==n-1){
                array2[j]=array[k][j];
            }
        }
    }
    for(int k=0;k<n;k++){
        if((array1[k]!=array1[n-1-k]) || (array2[k]!=array2[n-1-k])){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}