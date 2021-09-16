#include <iostream>

using namespace std;

int input(const char* value) {
        cout << value;
        int output;
        cin >> output;
        return output;
}

int euklidesAlghoritm(int a, int b) {
        while (a != b) {
                if (a > b) {
                        a -= b;
                } else {
                        b -= a;
                }
        }

        // when the numbers are equal, GCD (polish: NWD) is: GCD = a = b
        return a;
}

int main() {
        int a = input("enter a ");
        int b = input("enter b ");

        int gcd = euklidesAlghoritm(a, b);

        printf("GCD of numbers %d, %d = %d", a, b, gcd);

	return 0;
}
