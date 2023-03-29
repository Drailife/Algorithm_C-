#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a, b;
	a = 1, b = 2;
	cout << " 你好" << endl;
	cout << "after swap : a-" << a << " b-" << b << endl;
	std::swap(a, b);
	cout << "after swap : a-" << a << " b-" << b << endl;
	system("pause");
	return 0;
}
