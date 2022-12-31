#include <iostream>
#include <string>

using namespace std;

float calcTest(float partA, float partB) {
    return ((partA + partB) * 0.15);
}

void result(float totalTest) {
    if (totalTest >= 50) {
        cout << "\nYou have passed" << endl;
    } else {
        cout << "\nYou failed" << endl;
    }
}

int main() {
    float partA, partB, totalTest;

    cout << "Enter your part A score: ";
    cin >> partA;

    cout << "Enter your part B score: ";
    cin >> partB;

    totalTest = calcTest(partA, partB);

    cout << "The result for your test is " << totalTest;
    result(totalTest);

    return 0;
}