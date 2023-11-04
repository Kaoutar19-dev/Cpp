#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <array>
using namespace std;

template <typename Iterator, typename T>
bool recherche(Iterator debut, Iterator fin, const T& valeur) {
    while (debut != fin) {
        if (*debut == valeur) {
            return true;
        }
        ++debut;
    }
    return false;
}

int main() {
    // 1. Création d'un set de type int avec des entiers de 1 à 100.
    set<int> ensembleIntegers;
    for (int i = 1; i <= 100; ++i) {
        ensembleIntegers.insert(i);
    }

    // 2. Utilisation de la fonction de recherche sur un set.
    int valeurRecherchee = 42;
    bool resultatRechercheSet = recherche(ensembleIntegers.begin(), ensembleIntegers.end(), valeurRecherchee);

    if (resultatRechercheSet) {
        cout << "La valeur " << valeurRecherchee << " est présente dans le set d'entiers." << endl;
    } else {
        cout << "La valeur " << valeurRecherchee << " n'est pas présente dans le set d'entiers." << endl;
    }

    // 3. Utilisation de la fonction de recherche sur un vecteur de chaînes de caractères.
  
    vector<string> vecteurStrings = {"Hello", "World", "C++", "Programming"};
    string valeurRechercheeString = "C++";
    bool resultatRechercheVector = recherche(vecteurStrings.begin(), vecteurStrings.end(), valeurRechercheeString);

    if (resultatRechercheVector) {
        cout << "La valeur '" << valeurRechercheeString << "' est présente dans le vecteur de chaînes de caractères." << endl;
    } else {
        cout << "La valeur '" << valeurRechercheeString << "' n'est pas présente dans le vecteur de chaînes de caractères." << endl;
    }

    // 4. Utilisation de la fonction de recherche sur un tableau 'classique' de float.
  
    array<float, 5> tableauFloats = {1.5f, 2.3f, 3.7f, 4.1f, 5.0f};
    float valeurRechercheeFloat = 3.7f;
    bool resultatRechercheArray = recherche(tableauFloats.begin(), tableauFloats.end(), valeurRechercheeFloat);

    if (resultatRechercheArray) {
        cout << "La valeur " << valeurRechercheeFloat << " est présente dans le tableau de float." << endl;
    } else {
        cout << "La valeur " << valeurRechercheeFloat << " n'est pas présente dans le tableau de float." << endl;
    }

    return 0;
}






