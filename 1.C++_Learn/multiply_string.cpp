#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> multi(const vector<int> a, const vector<int> b)
    {
        int len = a.size() + b.size();
        vector<int> c(len, 0);
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < b.size(); j++)
            {
                c[i + j] = a[i] * b[j];
            }
        }
        int t = 0;
        for (int i = 0; i < c.size(); i++)
        {
            t += c[i];
            c[i] = t % 10;
            t /= 10;
        }
        // 删除首行空值0
        while (c.size() > 1 && c.back() == 0)
            c.pop_back();
        return c;
    }
    string multiply(string num1, string num2)
    {
        vector<int> a, b;
        for (int i = num1.size() - 1; i >= 0; i--)
        {
            a.push_back(num1[i] - '0');
        }
        for (int i = num2.size() - 1; i >= 0; i--)
        {
            b.push_back(num2[i] - '0');
        }

        auto c = multi(a, b);
        string result = "";
        for (int i = c.size() - 1; i >= 0; i--)
        {
            result += to_string(c[i]);
        }
        return result;
    }
};

int main()
{
    string num1, num2;
    cin >> num1 >> num2;
    Solution A;
    cout << A.multiply(num1, num2) << endl;
}