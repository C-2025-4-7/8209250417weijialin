#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout << "输入一个字符";
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - 'a' + 'A';
		cout << "转换后：" << ch << endl;
	}
	else
	{
		int nextAscii = static_cast<int>(ch) + 1;
		cout << "后继字符的ASCII码值为：" << ch << endl;
		return 0;
	}
}