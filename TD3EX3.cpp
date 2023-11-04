#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Personne {
    string nom;
    string prenom;
    int age;
};


bool comparerPersonnes(const Personne& personne1, const Personne& personne2) {
    if (personne1.nom != personne2.nom) {
        return personne1.nom < personne2.nom;
    }
    return personne1.prenom < personne2.prenom;
}

int main() {
    vector<Personne> listePersonnes;

    while (true) {
        Personne personne;
        cout << "Entrez le nom (ou 'fin' pour terminer) : ";
        cin >> personne.nom;
        if (personne.nom == "fin") {
            break;
        }

        cout << "Entrez le prénom : ";
        cin >> personne.prenom;

        cout << "Entrez l'âge : ";
        cin >> personne.age;

        listePersonnes.push_back(personne);
    }

  
    sort(listePersonnes.begin(), listePersonnes.end(), comparerPersonnes);

    cout << "Liste des personnes triée :\n";
    for (const Personne& personne : listePersonnes) {
        cout << "Nom : " << personne.nom << ", Prénom : " << personne.prenom << ", Âge : " << personne.age << endl;
    }

    return 0;
}




