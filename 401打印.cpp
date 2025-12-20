#include<iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    int distinctCount = 0;
    cout << "请输入10个整数：" << endl;

    for (int i = 0; i < SIZE; i++) {
        int input;
        cin >> input;

        // 检查是否为新数
        bool found = false;
        for (int j = 0; j < distinctCount; j++) {
            if (numbers[j] == input) {
                found = true;
                break;
            }
        }

        // 如果是新数则存入数组
        if (!found) {
            numbers[distinctCount] = input;
            distinctCount++;
        }
    }

    cout << "不同的数有 " << distinctCount << " 个: ";
    for (int i = 0; i < distinctCount; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}