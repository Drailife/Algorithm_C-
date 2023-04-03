#include <set>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    // set 会自动排序
    set<int> test = {1, 2, 3, 4, 5, 6, 7};
    test.erase(1);
    test.insert(10);
    test.insert(9);
    for (auto it : test)
    {
        cout << it << " ";
    }
    cout << endl;
    set<int> comp1 = {1, 2, 3, 4};
    set<int> res;
    set_difference(test.begin(), test.end(), comp1.begin(), comp1.end(), inserter(res, res.begin()));
    for (auto it : res)
    {
        cout << it << " ";
    }
    cout << endl;
    res.clear();

    set_intersection(test.begin(), test.end(), comp1.begin(), comp1.end(), inserter(res, res.begin()));
    for (auto it : res)
    {
        cout << it << " ";
    }
    cout << endl;
    res.clear();

    set_union(test.begin(), test.end(), comp1.begin(), comp1.end(), inserter(res, res.begin()));
    for (auto it : res)
    {
        cout << it << " ";
    }
    cout << endl;
    res.clear();
}