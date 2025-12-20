#include <iostream>
using namespace std;

int findGCD(int a, int b);  
void findGCDandLCM(int a, int b, int& gcd, int& lcm);  // 求最大公约数和最小公倍数（第二部分）

int main() {
    int m, n;

    // 输入自然数m和n
    cout << "请输入两个自然数m和n: ";
    cin >> m >> n;

    if (m <= 0 || n <= 0) {
        cout << "请输入正整数！" << endl;
        return 1;
    }

    // 第一部分：求最大公约数
    cout << "第一部分：求最大公约数" << endl;
    int gcd1 = findGCD(m, n);
    cout << m << " 和 " << n << " 的最大公约数是: " << gcd1 << endl;

    // 第二部分：求最大公约数和最小公倍数
    cout << "第二部分：求最大公约数和最小公倍数" << endl;
    int gcd2, lcm;
    findGCDandLCM(m, n, gcd2, lcm);
    cout << m << " 和 " << n << " 的最大公约数是: " << gcd2 << endl;
    cout << m << " 和 " << n << " 的最小公倍数是: " << lcm << endl;
    return 0;
}

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void findGCDandLCM(int a, int b, int& gcd, int& lcm) {
    // 先求最大公约数
    int originalA = a;
    int originalB = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (originalA / gcd) * originalB;
}