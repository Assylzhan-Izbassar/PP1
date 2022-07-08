#include<iostream>
#include<map>

using namespace std;
map<char,int> m;
int main(){
    int n;
    cin>>n;
    string s;
    char c;
    int cnt1=0;
    int cnt2=0;
    int cnt3=0;
    for(int k=0;k<n;k++){
        cin>>s>>c;
        if(c=='A'){
            cnt1++;
        }
        else if(c=='B'){
            cnt2++;
        }
        else if(c=='C'){
            cnt3++;
        }
    }
    cout<<'A'<<" "<<cnt1<<endl;
    cout<<'B'<<" "<<cnt2<<endl;
    cout<<'C'<<" "<<cnt3<<endl;
    return 0;
}