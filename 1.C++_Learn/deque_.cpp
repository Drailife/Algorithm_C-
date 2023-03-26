/*
 * Author: Drailife 
 * Created Time:  2023/3/26 16:09:19
 * File Name: 1.C++_Learn\deque.cpp
 */
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include<deque>
using namespace std;

typedef deque<int> Deque_Int;

int main() {
	int num;
	Deque_Int deque(10);
	cout<<deque.size();
	for(int i = 0; i < 10; i++){
		//deque.push_back(10);
		deque[i] = 10;
	}

	deque.push_front(1000);
	deque.push_back(999);
	int size_ = deque.size();

	cout<<"\nsize:"<<size_<<endl;	
	for(auto it : deque)
	{
		//cout<<it<<endl;
	}
	cout << endl;
	cout << deque.front()<<endl;
	cout << deque.back()<<endl;
	cout << *deque.begin()<<endl;
    return 0;
}

