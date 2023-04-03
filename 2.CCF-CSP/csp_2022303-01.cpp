#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

typedef struct Square
{
    int x_1 = 0, y_1 = 0;
    int x_2, y_2;
} S;

int intersection(const S &a, const S &b)
{
    int weight = min(a.x_2, b.x_2) - max(a.x_1, b.x_1);
    int height = min(a.y_2, b.y_2) - max(a.y_1, b.y_1);
    if (weight >= 0 && height >= 0)
        return weight * height;
    return 0;
}

int main()
{
    int n;
    S res;
    cin >> n >> res.x_2 >> res.y_2;
    vector<S> field;
    for (int i = 0; i < n; i++)
    {
        S temp;
        cin >> temp.x_1 >> temp.y_1 >> temp.x_2 >> temp.y_2;
        field.push_back(temp);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += intersection(res, field[i]);
    }
    cout << ans;
}