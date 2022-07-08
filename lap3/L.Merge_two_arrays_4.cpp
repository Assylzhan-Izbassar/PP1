#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    int n, m;
    cin >> n;
    
    int a[500500], b[500500], c[500500];
    
    for(size_t i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    cin >> m;
    
    for(size_t i = 1; i <= m; ++i) {
        cin >> b[i]; 
    }
    
    size_t x = 1, y = 1;
    
    a[n + 1] = 1e9 + 17;
    
    b[m + 1] = 1e9 + 17;

    for(size_t i = 1; i <= n + m; ++i) {
        if(a[x] >= b[y]) {
            c[i] = b[y];
            ++y; 
        }
        else{
            c[i] = a[x];
            ++x; 
        }
    }
    //sort(c,c+n+m);
    for (size_t i = 1; i <= n + m; ++i) {
       cout << c[i] << " ";
    }
    /*
    3
    2 4 2
    3
    8 2 6
    Без сортировки массив выходит вот так, потому что первый элемент второго массива больше чем все элементы первего
    2 4 2 8 2 6
    */
    
    return 0; 
}