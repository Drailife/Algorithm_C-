#define varname(x) #x
#define pvarname(x) cout << #x << ": "
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
struct Point
{
	T x;
	T y;
	// 构造函数j
	Point(T x, T y) : x(x), y(y) {}
};
// 重写“ + ”
template <typename T>
Point<T> operator+(const Point<T> &a, const Point<T> &b)
{
	return Point<T>(a.x + b.x, a.y + b.y);
}

// 打印自己的数据
template <typename T>
void Print_point(Point<T> a)
{
	cout << varname(x:) << a.x << "\t";
	cout << varname(y:) << a.y << endl;
}

int main()
{
	Point<int> point_1(2, 3);
	Point<int> point_2(4, 6);
	pvarname(point_1);
	Print_point(point_1);
	pvarname(point_2);
	Print_point(point_2);

	Point<int> point_3 = point_1 + point_2;
	pvarname(point_3);
	Print_point(point_3);
	return 0;
	system("pasuse");
}
