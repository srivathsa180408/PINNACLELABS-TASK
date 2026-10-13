#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;

int main() {
    long long num;

    cout << "================================\n";
    cout << "      NUMBER CONVERTER\n";
    cout << "================================\n";

    cout << "Enter a non-negative decimal number: ";
    cin >> num;

    if (cin.fail() || num < 0) {
        cout << "Invalid input! Enter a non-negative integer.\n";
        return 1;
    }

    cout << "\nDecimal      : " << dec << num;
    cout << "\nOctal        : " << oct << num;
    cout << "\nHexadecimal  : " << uppercase
         << hex << num;

    cout << "\nBinary       : ";
    if (num == 0) {
        cout << "0";
    } else {
        bool started = false;
        for (int i = 63; i >= 0; i--) {
            bool bit = (static_cast<unsigned long long>(num)
                        >> i) & 1ULL;
            if (bit) started = true;
            if (started) cout << bit;
        }
    }

    cout << "\n\nConversion completed successfully!\n";
    return 0;
}