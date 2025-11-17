#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "请输入x的值: ";
    cin >> x; 

    double y;
    if (x > 0 && x < 1) 
    { 
        y = 3 - 2 * x;
    }
    else if (x >= 1 && x < 5)
    { 
        y = 2 / (4 * x) + 1;
    }
    else if (x >= 5 && x < 10) 
    { 
        y = x * x;
    }

    cout << "y的值为: " << y << endl; 

    return 0;
}