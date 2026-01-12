#include <iostream>
using namespace std;

// Inline function
inline int square(int x) {
	return x * x;
}

int main() {
	int num = 5;
	// Calling inline function
	int res = square(num);
	cout << res;
	return 0;
}