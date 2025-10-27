#include <iostream>
using namespace std;
  // Version avec passage par adresse
void incrementer(int* x) {
    (*x)++;
}

void permuter(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    cout << "Avant : a = " << a << ", b = " << b << endl;

    incrementer(&a);
    cout << "Apres incrementer(a) : a = " << a << endl;

    permuter(&a, &b);
    cout << "Apres permuter(a,b) : a = " << a << ", b = " << b << endl;

    return 0;
}
// Version avec passage par référence
#include <iostream>
using namespace std;

void incrementer(int& x) {
    x++;
}

void permuter(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;
    cout << "Avant : a = " << a << ", b = " << b << endl;

    incrementer(a);
    cout << "Apres incrementer(a) : a = " << a << endl;

    permuter(a, b);
    cout << "Apres permuter(a,b) : a = " << a << ", b = " << b << endl;

    return 0;
}

