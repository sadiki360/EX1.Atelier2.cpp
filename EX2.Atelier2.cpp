#include <iostream>
using namespace std;

int testPair(int n) {
    return (n % 2 == 0);
}

int testMultipleDe3(int n) {
    return (n % 3 == 0);
}

int main() {
    int n;
    cout << "donnez un entier : ";
    cin >> n;

    // test pair / impair
    if (testPair(n))
        cout << "il est pair" << endl;
    else
        cout << "il est impair" << endl;

    // test multiple de 3
    if (testMultipleDe3(n))
        cout << "il est multiple de 3" << endl;
    else
        cout << "il n'est pas multiple de 3" << endl;

    // test multiple de 6
    if (testPair(n) && testMultipleDe3(n))
        cout << "il est divisible par 6" << endl;
    else
        cout << "il n'est pas divisible par 6" << endl;

    return 0;
}
