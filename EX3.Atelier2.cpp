#include <iostream>
using namespace std;

int main() {
    int tab[10];
    int *p; // pointeur vers int

    cout << "Entrez 10 nombres entiers :" << endl;

    // Lecture en utilisant un pointeur
    for (p = tab; p < tab + 10; p++) {
        cout << "Nombre " << (p - tab) + 1 << " : ";
        cin >> *p;
    }

    int *pmax = tab;
    int *pmin = tab;

    // Recherche du max et min avec pointeurs
    for (p = tab + 1; p < tab + 10; p++) {
        if (*p > *pmax)
            pmax = p;
        if (*p < *pmin)
            pmin = p;
    }

    cout << "Le plus grand nombre est : " << *pmax << endl;
    cout << "Le plus petit nombre est : " << *pmin << endl;

    return 0;
}
