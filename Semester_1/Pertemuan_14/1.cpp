#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

int main() {
    int binaryInput;
    cout << "Masukkan bilangan biner: ";
    cin >> binaryInput;

    int decimalResult = binaryToDecimal(binaryInput);

    cout << "Hasil konversi ke bilangan desimal: " << decimalResult << endl;

    return 0;
}
