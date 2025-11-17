#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double f, c;

    cout << "请输入华氏温度: ";
    cin >> f;

    c = (f - 32) * 5.0 / 9.0;

 
    cout << fixed << setprecision(2);
    cout << "摄氏温度: " << c<< endl;

    return 0;
}
