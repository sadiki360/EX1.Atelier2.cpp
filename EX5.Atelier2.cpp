#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int& ref_a = a;   // référence vers a
    int* p_a = &a;    // pointeur vers a

    cout << "Valeur de a : " << a << endl;
    cout << "Adresse de a : " << &a << endl;

    cout << "Valeur de ref_a : " << ref_a << endl;
    cout << "Adresse de ref_a : " << &ref_a << endl;

    cout << "Valeur du pointeur p_a : " << p_a << endl;
    cout << "Valeur pointee par p_a : " << *p_a << endl;

    return 0;
}
