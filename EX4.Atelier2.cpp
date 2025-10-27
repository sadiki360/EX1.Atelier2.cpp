#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    // 1. Allocation dynamique du premier tableau
    int* tab = new int[n];

    cout << "Entrez " << n << " entiers : ";
    for (int i = 0; i < n; i++)
        cin >> tab[i];

    // 2. Création du second tableau contenant les carrés
    int* carre = new int[n];
    for (int i = 0; i < n; i++)
        carre[i] = tab[i] * tab[i];

    // 3. Suppression du premier tableau
    delete[] tab;

    cout << "Valeurs du tableau des carres : ";
    for (int i = 0; i < n; i++)
        cout << carre[i] << " ";
    cout << endl;

    delete[] carre; // libération mémoire
    return 0;
}
