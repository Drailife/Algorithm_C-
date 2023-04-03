#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    multimap<int, int> a;
    a.insert(pair<int, int>(1, 10));
    a.insert(pair<int, int>(1, 20));
    a.insert(pair<int, int>(2, 10));
    a.insert(pair<int, int>(2, 30));
    a.insert(pair<int, int>(3, 70));

    pair<multimap<int, int>::iterator, multimap<int, int>::iterator> res = a.equal_range(2);
    multimap<int, int>::iterator it;

    for (it = res.first; it != res.second; it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    auto it1 = upper_bound(a.begin(), a.end(), 2);
    multimap<int, int>::iterator temp = a.upper_bound(2);
    cout << temp->first << " " << temp->second << endl;
    multimap<int, int>::iterator temp2 = a.lower_bound(2);
    cout << temp2->first << " " << temp2->second << endl;
}