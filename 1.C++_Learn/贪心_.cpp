/*
 * Author: Drailife
 * Created Time:  2023/3/27 11:37:31
 * File Name: D:\OneDrive - bjtu.edu.cn\Code_Learn\7.Vim_C++\1.C++_Learn\贪心_.cpp
 */
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
const int N = 1000;
// 物品可分割的装载问题称为背包问题，物品不可分割的问题为 0 - 1 背包问题
// 0-1背包问题已经不具备贪心的选择性质；
//
// 题目要求 有n种宝物,每种宝物有重量w和价值v，可运载m重量的宝物，而且宝物可分割
// 第一行输入 n，m  第 1-n+1 行输入对应的重量和价值
struct baowu
{
	double w;
	double v;
	double w_v;
} BW[N];

int main()
{
	system("pause");
	int m, n, i;
	cout << "你好" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> BW[i].w >> BW[i].v;
		BW[i].w = (double)(BW[i].w / BW[i].v);
	}
	for (i = 0; i < n; i++)
	{
		cout << BW[i].w_v << endl;
	}

	return 0;
}
