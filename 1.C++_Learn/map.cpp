#include<iostream>
#include<map>
#include<string>
using namespace std;
typedef std::pair<int, int> INT_PAIR;
typedef std::map<int, int> INT_MAP;
template<class T>
void Map_Print(T& m)
{
	cout << "key - value: ";
	for (auto it = m.begin(); it != m.end(); it++)
		cout << it->first << " " << it->second << "      ";
	cout << endl;

}
class Mycom {
public:
	bool operator()(int v1,int v2) const //要求const 函数不能修改成员变量，否则编译会报错。
	{
		return v1 > v2;
	}
};
void map_sort()
{
	map<int,int,std::greater<int>> map_3;
	map_3.insert(make_pair(1, -1));
	map_3.insert(make_pair(3, -1));
	map_3.insert(make_pair(11, -1));
	Map_Print(map_3);
}
int main()
{
	std::pair<int, int>str(10,100);
	std::cout << str.first << " " << str.second << std::endl;
	std::pair<std::string, int>str1 = std::make_pair("hello", 100);
	std::cout << str1.first << " " << str1.second << std::endl;
	
	//map的构造
	INT_MAP map_1;
	map_1.insert(INT_PAIR(1, 2));
	map_1.insert(make_pair(3, 4));
	map_1[5] = 6;
	Map_Print(map_1);
	
	INT_MAP map_2;
	map_2[0] = 1; map_2[1] = 10;
	map_1.swap(map_2);
	map_1.swap(map_2);
	//删除
	map_2.erase(1);
	map_2.erase(map_2.begin());
	map_2.erase(map_2.begin(), map_2.end());
	map_2.clear();
	cout <<"map_1 size:" << map_1.size() << endl;
	cout << "map_1 empty:" << map_1.empty() << endl;
	cout << "map_2 empty:" << map_2.empty() << endl;
	Map_Print(map_1); // 1 2      3 4      5 6
	//查找和统计
	cout << "map_1.count(1): " << map_1.count(1) << endl;
	cout << "map_1.count(8): " << map_1.count(8) << endl;

	// find(key); 查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回map.end()
	INT_MAP::iterator find_key = map_1.find(8);
	if (find_key == map_1.end())
		cout << "无法找到key=8" << endl;
	else
		cout << "找到的迭代器为" << find_key->first << "--" << find_key->second << endl;
	map_sort();
}
