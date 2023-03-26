#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<int> INT_VEC;
typedef vector<float> FLO_VEC;

bool Comp_Descend_order(const int& a, const int& b)
{
	return a > b;
}
bool Comp_Ascend_order(const int& a, const int& b)
{
	return a < b;
}
int main()
{
	INT_VEC vec;
	int i = 5;
	while (i--)
		vec.push_back(i * 3);
	cout << endl;

	// 再某一个元素之前添加元素
	vec.insert(vec.begin(), -1);
	// 在某一个元素之间添加相同类型的[first,last)之间的数据
	vec.insert(vec.begin(), vec.begin(), vec.begin() + 2);

	//删除单个元素
	vec.erase(vec.begin());
	//删除系列元素
	vec.erase(vec.begin(), vec.begin() + 2);
	vec.pop_back();	//删除最后一个元素

	vec.at(0);
	vec.front(); // 首元素的引用
	vec.back();
	vec.begin(); // 向量头指针，指向第一个元素
	vec.end();	// 向量尾指针，指向最后一个元素的下一个位置
	vec.rbegin(); // 反向迭代器，最后一个元素迭代指针
	vec.rend(); // 反向迭代器，第一个元素之前的迭代指针

	auto it1 = vec.begin();
	// vector的打印
	while (it1 != vec.end()) {
		cout << *it1 << " ";
		it1++;
	}
	cout << endl;
	// 反向输出
	auto it2 = vec.rbegin();
	while (it2 != vec.rend())
	{
		cout << *it2 << " ";
		it2++;
	}
	
	vec.empty();
	vec.size();
	vec.capacity(); //返回当前向量所能容纳的最大元素值
	vec.max_size(); // 返回最大可允许的vector元素数量值
	INT_VEC vec1(10, 100);// 10个100
	vec.swap(vec1); // 交换两个容器；
	cout << endl;
	for (auto it3 = vec.begin(); it3 != vec.end(); it3++)
		cout << *it3 << " ";

	// 查找 vec =[100,100,100,100……]
	vec[5] = -1;
	auto it4 = std::find(vec.begin(), vec.end(), -1);
	cout<<endl<< "distance:" << std::distance(vec.begin(), it4) << endl;

	vec.assign(3, -1); //清空原vec 用3 个 -1代替
	// 清空原vec使用(vec1.begin(), vec1.begin() + 1)代替
	vec.assign(vec1.begin(), vec1.begin() + 1); 
	
	sort(vec.begin(), vec.end(), std::less<int>()); //降序
	sort(vec.begin(), vec.end(), std::greater<int>()); //升序
	cout << endl;
	for (auto it3 = vec1.begin(); it3 != vec1.end(); it3++)
		cout << *it3 << " ";


}
