#include <iostream>
#include <iomanip>
using namespace std;

// 起泡排序函数
void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                double temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    const int SIZE = 10;
    double numbers[SIZE];

    cout << "请输入10个双精度数字：" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "数字 " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    cout << "排序前的数组：" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << setw(10) << numbers[i];
    }
    cout << endl;

    // 调用起泡排序函数
    bubbleSort(numbers, SIZE);

    // 显示排序后的数组
    cout << "排序后的数组（升序）：" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << setw(10) << numbers[i];
    }
    cout << endl;

    return 0;
}