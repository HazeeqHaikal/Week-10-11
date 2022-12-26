#include <iostream>
#include <string>

using namespace std;

void duplicate(int a, int b, int c) {
    a *= 3;
    b += 2;
    c *= 5;
}

int main() {
    int x = 1, y = 3, z = 7;
    duplicate(x, y, z);
    cout << x << " " << y << " " << z << endl;

    return 0;
}