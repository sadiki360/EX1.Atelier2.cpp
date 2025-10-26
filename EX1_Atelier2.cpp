#include <iostream>
using namespace std;

void compteurAppels() {
    static int compteur = 0; 
    compteur++;
    cout << "appel numéro " << compteur << endl;
}

int main() {
    compteurAppels();
    compteurAppels();
    compteurAppels();
    return 0;
}
