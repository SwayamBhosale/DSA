// Decimal to binary conversion
#include <iostream>
using namespace std;

int n = 42;
while (n > 0) {
    cout << n % 2;
    n /= 2;
}
