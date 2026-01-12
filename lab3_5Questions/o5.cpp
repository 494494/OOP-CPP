#include <iostream>
using namespace std;

class MyClass {
private:
    int secretNumber;

    void showSecret() {
        cout << "Secret number is: " << secretNumber << endl;
    }

public:
    MyClass(int num) {
        secretNumber = num;
    }

    void revealSecret() {
        cout << "Accessing secret from public function:" << endl;
        showSecret();
    }
};

int main() {
    MyClass obj(42);
    obj.revealSecret();
    return 0;
}
