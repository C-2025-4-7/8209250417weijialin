#include <iostream>
using namespace std;

int str(const char* s) {
    int r = 0;
    for (int i = 0; s[i]; i++) {
        char c = s[i];
        int d;

        if (c >= '0' && c <= '9') d = c - '0';
        else if (c >= 'A' && c <= 'F') d = 10 + c - 'A';
        else if (c >= 'a' && c <= 'f') d = 10 + c - 'a';
        else return -1;

        r = r * 16 + d;
    }
    return r;
}

int main() {
    cout << str("A5") << endl;  
    return 0;
}