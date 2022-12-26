#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define pi 3.14159

float sphereVol(float radius){
    float v = (4/3) * pi * pow(radius, 3);
    return v;
}


int main() {

    float r;
    cout << "Enter the radius of the sphere: ";
    cin >> r;

    cout << "Volume = " << sphereVol(r) << endl;
    return 0;

}