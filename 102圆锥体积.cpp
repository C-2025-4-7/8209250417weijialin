#include<iostream>
using namespace std;

int main()
{
	double PI = 3.14;
	double r, h, v;
	cout << "请输入半径";
	cin >> r;
	cout << "请输入高度";
	cin >> h;
	v = (1.0 / 3.0) * PI * r * r * h;
	cout << "圆锥的体积为：" << v << endl;
	return 0;
}