#include <iostream>
using namespace std;

int main() {
    const int N = 100;
    bool lockers[N + 1] = { false }; 

    for (int s = 1; s <= N; s++) {
        for (int locker = s; locker <= N; locker += s) {
            lockers[locker] = !lockers[locker];
        }
    }

    // 输出开着的存物柜号码
    bool first = true;
    for (int i = 1; i <= N; i++) {
        if (lockers[i]) {
            if (!first) {
                cout << " ";
            }
            cout <<"开着的存物柜："<< i<<endl;
            first = false;
        }
    }
    return 0;
}