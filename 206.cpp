#include <iostream>
using namespace std;

int gcd(int a, int b) 
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}

int main() 
{
    int a, b;

    cout << "输入两个正整数：" << endl;
    cin >> a >> b;

    int maxGcd = gcd(a, b);
    int minLcm = lcm(a, b);

    cout << "最大公约数：" << maxGcd << endl;
    cout << "最小公倍数：" << minLcm << endl;

    return 0;
}