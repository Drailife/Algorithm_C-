#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>
#include <vector>
#define Max_Size 5050
using namespace std;

/*
1、const修饰函数参数，表示参数不可变，若参数为引用，可以增加效率(引用传递而不用值拷贝)
2、const 修饰函数返回值，避免返回值被修改
3、const修饰成员函数(不能修饰全局函数，因为全局函数没有this指针)
*/

class BigINT
{
private:
    int num[Max_Size];
    string num_str;
    int len = 0;

public:
    BigINT(string str);
    BigINT();
    BigINT operator+(const BigINT &b);
    BigINT operator+=(const BigINT &b);
    BigINT operator*(const BigINT &b);
    friend ostream &operator<<(ostream &cout, const BigINT &b);
    void BigIntPrin();
};
BigINT::BigINT()
{
    num_str = "";
}
BigINT::BigINT(string str)
{
    num_str = str;
    len = num_str.length();
    reverse(num_str.begin(), num_str.end());
    for (int i = 0; i < str.length(); i++)
    {
        num[i] = num_str[i] - '0';
    }
}

BigINT BigINT::operator+(const BigINT &b)
{
    BigINT temp("");
    temp.len = max(this->num_str.length(), b.num_str.length());
    for (int i = 0; i < temp.len; i++)
    {
        temp.num[i] = this->num[i] + b.num[i];
    }
    for (int i = 0; i < temp.len; i++)
    {
        if (temp.num[i] >= 10)
        {
            temp.num[i] -= 10;
            temp.num[i + 1] += 1;
        }
    }
    return temp;
};

void BigINT::BigIntPrin()
{
    if (num[this->len] != 0)
    {
        cout << num[len];
    }
    for (int i = this->len - 1; i >= 0; i--)
    {
        cout << num[i];
    }
    cout << endl;
};

BigINT BigINT::operator+=(const BigINT &b)
{
    *this = *this + b;
    return *this;
}

BigINT BigINT::operator*(const BigINT &b)
{
    int maxlen = this->len + b.len;
    BigINT temp;
    temp.len = maxlen;
    for (int i = 0; i < this->len; i++)
    {
        for (int j = 0; j < b.len; j++)
        {
            temp.num[i + j] = this->num[i] * b.num[j];
        }
    }
    int t = 0;
    for (int i = 0; i < maxlen; i++)
    {
        t += temp.num[i];
        temp.num[i] = t % 10;
        t /= 10;
    }
    return temp;
}

ostream &operator<<(ostream &cout, const BigINT &b)
{
    if (b.num[b.len] != 0)
    {
        cout << b.num[b.len];
    }
    for (int i = b.len - 1; i >= 0; i--)
    {
        cout << b.num[i];
    }
    cout << endl;
    return cout;
}

int main()
{
    BigINT a("0");
    BigINT b("0");
    BigINT c;
    c = a + b;
    cout << c;
    c = a * b;
    cout << c;
    return 0;
}