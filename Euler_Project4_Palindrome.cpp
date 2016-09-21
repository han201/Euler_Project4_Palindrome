// Find the largest palindrome which is a multiple of two 3 digit integers

#include <iostream>
#include <vector>
// #include "utils.h"
using namespace std;

vector<int> digits(int x) {
	vector<int> v;
	for (; x > 0; x = x / 10)
		v.push_back(x % 10);
	return v;
}

int main() {
	int zmax = 0;
	int a = 100;
	int b = 1000;
	for (int x = a; x < b; x++) {
		for (int y = a; y < b; y++) {
			int z = x*y;
			vector<int> result;
			result = digits(z);
			if (z < a*b) {
				if (result[0] == result[4] && result[1] == result[3]) {
					if (z > zmax) {
						zmax = z;
						cout << "5 digit palindrom:" << x << "*" << y << "=" << z << endl;
					}
				}
			}
			else {
				if (result[0] == result[5] && result[1] == result[4] && result[2] == result[3]) {
					if (z > zmax) {
						zmax = z;
						cout << "6 digit palindrom:" << x << "*" << y << "=" << z << endl;
					}
				}
			}
		}
	}
	cout << "maximum palindrome is " << zmax << endl;
	system("pause");
	return 0;

}