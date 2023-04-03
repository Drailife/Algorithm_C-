#include <stack>
#include <iostream>
using namespace std;

int main()
{
    // 先进后出（FILO)
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    cout << "Top: " << a.top() << endl;
    a.pop();
    cout << "Top: " << a.top() << endl;
}