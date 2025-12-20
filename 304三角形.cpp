#include <iostream>
#include <iomanip>
#include "304mytriangle.h"
using namespace std;

int main() {
    double side1, side2, side3;
    cout << "请输入三角形的三条边长: ";
    cin >> side1 >> side2 >> side3;
    if (is_valid(side1, side2, side3)) {
        double area = double_area(side1, side2, side3);
        cout << fixed << setprecision(2);
        cout << "三角形的面积为: " << area << endl;
    }
    else {
        cout << "输入的三条边长不能构成三角形" << endl;
    }

    return 0;
}