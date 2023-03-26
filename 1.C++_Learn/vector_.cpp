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

	// ��ĳһ��Ԫ��֮ǰ���Ԫ��
	vec.insert(vec.begin(), -1);
	// ��ĳһ��Ԫ��֮�������ͬ���͵�[first,last)֮�������
	vec.insert(vec.begin(), vec.begin(), vec.begin() + 2);

	//ɾ������Ԫ��
	vec.erase(vec.begin());
	//ɾ��ϵ��Ԫ��
	vec.erase(vec.begin(), vec.begin() + 2);
	vec.pop_back();	//ɾ�����һ��Ԫ��

	vec.at(0);
	vec.front(); // ��Ԫ�ص�����
	vec.back();
	vec.begin(); // ����ͷָ�룬ָ���һ��Ԫ��
	vec.end();	// ����βָ�룬ָ�����һ��Ԫ�ص���һ��λ��
	vec.rbegin(); // ��������������һ��Ԫ�ص���ָ��
	vec.rend(); // �������������һ��Ԫ��֮ǰ�ĵ���ָ��

	auto it1 = vec.begin();
	// vector�Ĵ�ӡ
	while (it1 != vec.end()) {
		cout << *it1 << " ";
		it1++;
	}
	cout << endl;
	// �������
	auto it2 = vec.rbegin();
	while (it2 != vec.rend())
	{
		cout << *it2 << " ";
		it2++;
	}
	
	vec.empty();
	vec.size();
	vec.capacity(); //���ص�ǰ�����������ɵ����Ԫ��ֵ
	vec.max_size(); // �������������vectorԪ������ֵ
	INT_VEC vec1(10, 100);// 10��100
	vec.swap(vec1); // ��������������
	cout << endl;
	for (auto it3 = vec.begin(); it3 != vec.end(); it3++)
		cout << *it3 << " ";

	// ���� vec =[100,100,100,100����]
	vec[5] = -1;
	auto it4 = std::find(vec.begin(), vec.end(), -1);
	cout<<endl<< "distance:" << std::distance(vec.begin(), it4) << endl;

	vec.assign(3, -1); //���ԭvec ��3 �� -1����
	// ���ԭvecʹ��(vec1.begin(), vec1.begin() + 1)����
	vec.assign(vec1.begin(), vec1.begin() + 1); 
	
	sort(vec.begin(), vec.end(), std::less<int>()); //����
	sort(vec.begin(), vec.end(), std::greater<int>()); //����
	cout << endl;
	for (auto it3 = vec1.begin(); it3 != vec1.end(); it3++)
		cout << *it3 << " ";


}
