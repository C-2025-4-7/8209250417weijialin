#include <iostream>
using namespace std;

void shuzu(int* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

int main() {
    int n;
    cout << "元素个数: ";
    cin >> n;

    int* arr = new int[n];

    cout << "输入元素: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    shuzu(arr, n);

    cout << "排序后: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}