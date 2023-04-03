#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a(10, 0);
    vector<int> b = {1, 2, 3, 4, 5};
    copy(b.begin(), b.end(), back_inserter(a));
    for (auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;
    auto it = find(a.begin(), a.end(), 3);
    cout << " " << distance(a.begin(), it) << endl;
}