#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int n;
    double m;
    cin >> n >> m;
    vector<double> money(n + 1, 0);
    for (int i = 0; i < n + 1; i++)
    {
        cin >> money[i];
        money[i] *= pow(1 + m, -i);
    }
    double sum = accumulate(money.begin(), money.end(), 0.0);
    printf("%.3lf\n", sum);
}