#include<iostream>
using namespace std;
 
 template<typename T> 
 T carre(T a){
    return a*a;
 }

 int main() {
    int entier = 5;
    double reel = 3.5;

    int carreEntier = carre(entier);
    double carreReel = carre(reel);

    std::cout << "Carré de l'entier : " << carreEntier << std::endl;
    std::cout << "Carré du réel : " << carreReel << std::endl;

    return 0;
 }