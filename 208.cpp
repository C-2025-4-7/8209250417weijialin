#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "请输入一个非负数 a: ";
    cin >> a;

    if (a < 0) {
        cout << "不能对负数开平方" << endl;
        return 1;
    }
    if (a == 0) {
        cout << "sqrt(0) = 0" << endl;
        return 0;
    }

    double x = a;  

    while (true)
    {
        double y = 0.5 * (x + a / x);  

        double diff = (y > x) ? (y - x) : (x - y);
        if (diff < 1e-5) {
            cout << "sqrt(" << a << ") ≈ " << y << endl;
            break;
        }

        x = y;
    }

    return 0;
}