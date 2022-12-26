#include <future>
#include <iostream>

using namespace std;

float calcPrice(float price, int quantity) {
    return price * quantity;
}

float calcDiscount(float price, int quantity) {
    float total = calcPrice(price, quantity);
    float discount;

    cout << "\nEnter the discount rate: ";
    cin >> discount;

    return total - (total * (discount / 100));
}

float calcTax(float price, int quantity) {
    float tax;
    float total = calcPrice(price, quantity);

    cout << "Enter the tax rate: ";
    cin >> tax;

    return total + (total * (tax / 100));
}

int main() {
    float price;
    int quantity;

    cout << "Enter the price for item: RM ";
    cin >> price;
    cout << "Enter the item quantity: ";
    cin >> quantity;

    float totalPrice = async(calcPrice, price, quantity).get();
    float totalDiscount = async(calcDiscount, price, quantity).get();
    float totalTax = async(calcTax, price, quantity).get();

    cout << "\nYour total price is RM " << totalPrice << endl;
    cout << "Your total price after discount: RM " << totalDiscount << endl;
    cout << "Your total price after tax: RM " << totalTax << endl;
}