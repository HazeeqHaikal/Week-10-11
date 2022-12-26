#include <iostream>
using namespace std;
int main() {
    char name[30];
    char gender;
    int maleCount, femaleCount;
    maleCount = femaleCount = 0;

    for (int counter = 0; counter < 5; counter++) {
        cout << "Name of the employee: ";
        cin >> ws;
        cin.getline(name, 30);
        cout << "Gender of the employee (M / F): ";
        cin >> gender;
        gender = tolower(gender);
        if (gender == 'm') {
            maleCount++;
        } else if (gender == 'f') {
            femaleCount++;
        } else {
            cout << "Invalid input";
        }
    }

    cout << "Total male employee: " << maleCount << endl;
    cout << "Total female employee: " << femaleCount << endl;

    system("pause");
    return 0;
}