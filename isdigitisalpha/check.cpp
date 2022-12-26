#include <iostream>
#include <string>

using namespace std;

int main() {
    char input;
    int countDigit, countAlpha, countOther;
    countDigit = countAlpha = countOther = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter a symbol: ";
        cin >> input;
        if (isdigit(input)) {
            countDigit++;
        } else if (isalpha(input)) {
            countAlpha++;
        }else{
            countOther++;
        }
    }

    cout << "Total digit: " << countDigit << endl;
    cout << "Total alpha: " << countAlpha << endl;
    cout << "Total symbol: " << countOther << endl;

    return 0;
}