#include <iostream>

using namespace std;

int findSquare(int i) {
    return i * i;
}

int main() {
    int below10 = 1;
    for(int i = 1; i <= 50; i++){
        if(below10 > 10){
            cout << endl;
            below10 = 1;
        }
        cout << findSquare(i) << " ";
        below10++;
    }

    return 0;
}