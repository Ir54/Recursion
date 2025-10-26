#include <iostream>
using namespace std;

int fab(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fab(n - 1) + fab(n - 2);
}

int main() {
    int num = 5;
    cout << "Fibonacci of " << num << " is " << fab(num) << endl;
    return 0;
}
