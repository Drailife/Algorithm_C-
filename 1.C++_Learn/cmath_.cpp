#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// ���ֶ���
	short  s = 10;
	int    i = -1000;
	long   l = 100000;
	float  f = 230.47;
	double d = 200.374;
	double g = -10.8;
	// ��ѧ����
	cout << "sin(d) :" << sin(d) << endl;
	cout << "abs(i)  :" << abs(i) << endl;
	cout << "floor(d) :" << floor(d) << endl;
	cout << "sqrt(f) :" << sqrt(f) << endl;
	cout << "pow( d, 2) :" << pow(d, 2) << endl;
	cout << "fabs(g): " << fabs(g) << endl;
	cout << log(1) << endl;
	cout << log10(10 * 10 * 10 * 10) << endl;
	return 0;
}
