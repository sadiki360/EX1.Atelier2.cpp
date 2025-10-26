#include <iostream>
using namespace std;
// avec le formalisme de tableau
int main() {
    int tab[10];
    int i;

    cout << "Entrez 10 nombres entiers :" << endl;

    // Lecture du tableau
    for (i = 0; i < 10; i++) {
        cout << "Nombre " << i + 1 << " : ";
        cin >> tab[i];
    }

    int max = tab[0];
    int min = tab[0];

    // Recherche du plus grand et du plus petit
    for (i = 1; i < 10; i++) {
        if (tab[i] > max)
            max = tab[i];
        if (tab[i] < min)
            min = tab[i];
    }

    cout << "Le plus grand nombre est : " << max << endl;
    cout << "Le plus petit nombre est : " << min << endl;

    return 0;
}
// avec le formalisme de pointeur

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
