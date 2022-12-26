#include <iostream>
using namespace std;

int largest(int n, int m) {
    int max;
    if (n > m)
        max = n;
    else
        max = m;
    return max;
}

int smallest(int x, int y) {
    int min;
    if (x < y)
        return x;
    else
        return y;
}



int findTotal(int, int);

void findAverage(int);

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // function call statement
    cout << "\nThe largest number is " << largest(num1, num2) << endl;
    cout << "The smallest number is " << smallest(num1, num2) << endl;
    int total = findTotal(num1, num2);
    cout << "The total is " << total << endl;
    findAverage(total);

    return 0;
}

int findTotal(int n1, int n2) {
    return n1 + n2;
}

void findAverage(int t) {
    float average = t / 2.0;
    cout << "The average is " << average << endl;
}
