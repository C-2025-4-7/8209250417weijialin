#include<iostream>
#include<iomanip>
using namespace std;

bool is_prime(int num) {
	if (num <= 1) {
		return false;
	}
	if (num == 2) {
		return true;
	}
	if (num % 2 == 0) {
		return false;
	}
	int qitajishu = sqrt(num);
	for (int i = 3;i <= qitajishu;i += 2) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int a = 0;
	int num = 2;
	int primes[200];
	cout << "前200个素数如下：" << endl;
	
	while (a < 200) {
		if (is_prime(num)) {
			primes[a] = num;
			a++;
		}
		num++;
	}
	for (int i = 0;i < 200;i++) {
		cout << setw(6) << primes[i];
		if ((i + 1) % 10 == 0) {
			cout << endl;
		}
	}
	return 0;
}