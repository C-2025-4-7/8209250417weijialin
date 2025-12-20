#include <iostream>
#include <cstring>
using namespace std;

// 使用指针实现的版本！！！！
int indexOf(const char* s1, const char* s2) {
    if (*s1 == '\0') {
        return 0;
    }

    const char* p = s2;

    while (*p != '\0') {
        const char* p1 = s1;
        const char* p2 = p;

        // 尝试匹配
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }

        // 如果s1完全匹配
        if (*p1 == '\0') {
            return p - s2;
        }

        p++;
    }
    return -1;
}

int main() {
    char s1[100], s2[100];

    cout << "Enter the first string: ";
    cin.getline(s1, 100);

    cout << "Enter the second string: ";
    cin.getline(s2, 100);

    int index = indexOf(s1, s2);

    if (index != -1) {
        cout << s1 << "是" << s2<< "的子串 at" << index << endl;
    }
    else {
        cout << s1 << "不是" << s2 << "的子串" << endl;
    }

    return 0;
}