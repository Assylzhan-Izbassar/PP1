#include <iostream>

#include <stack>

using namespace std;

int main(){ 

    stack<int> s;

    s.push(54);
    s.push(21);
    s.push(43);
    s.push(64);
    s.push(23);
    
    cout << s.top() << "\n";

    s.pop();

    cout << s.top() << "\n";

    return 0;
}