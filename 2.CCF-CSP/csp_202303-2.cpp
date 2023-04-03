#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> //包含accumulate
#include <map>
using namespace std;

int main()
{
    map<int, int> day, need, flag;
    int n, k, max_day = 0;
    long long m;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> day[i] >> need[i];
        max_day = max_day > day[i] ? max_day : day[i];
        flag[day[i]] += need[i];
    }
    for (int i = max_day; i >= 0; i--)
    {
        if (max_day <= k)
            break;
        if (m >= flag[i])
        {
            m -= flag[i];
            flag[i - 1] += flag[i];
            max_day--;
        }
        else
            break;
    }
    cout << max_day;
}