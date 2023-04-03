#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

typedef map<int, long long int> Map_INT;
Map_INT contact; // 科目编号 - 依赖编号
long long int day[102], begin_[102], last[102], time[102];

long long int day_need(int a)
{
    long long sum = 1;
    while (contact[a] != 0)
    { // 若存在依赖
        sum += day[contact[a]];
        a = contact[a]; // 找到yilai的地方
    }
    return sum;
}
int main()
{
    int n = 0, m = 0;       // 天数和科目数
    int flag_end_print = 1; // 用于标志是否需要计算最晚开始时间
    cin >> n >> m;
    contact[0] = 0;
    begin_[1] = 1;
    for (auto i = 1; i <= m; i++)
    {
        cin >> contact[i]; // 输入
    }
    for (auto i = 1; i <= m; i++)
    {
        cin >> day[i]; // 所需天数
        begin_[i] = day_need(i);
    }
    for (int i = 1; i <= m; i++)
        cout << begin_[i] << (i == m ? "\n" : " ");

    // 实现最晚开始时间
    //  time 数组中存放着 第 i 个项目 它被依赖的项目的 最晚的开始时间 的最小值
    // last[m] = m + 1 - day[m]; //最后一个项目没有依赖项目，可以直接进行求解
    // time[contact[m]] = max(time[0],last[m]);

    for (int i = m; i >= 1; i--)
    {
        last[i] = n + 1 - day[i] - time[i];
        time[contact[i]] = max(time[contact[i]], day[i]); // 更新被依赖项目
        if (last[i] < 1)                                  // 说明无法完成
            return 0;
    }
    for (int i = 1; i <= m; i++)
        cout << last[i] << (i == m ? "\n" : " ");
    return 0;
}