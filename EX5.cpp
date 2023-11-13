#include <iostream>
#include<exception>
using namespace std;
class Test{
public:
static int tableau[10] ;
public :
static int division(int indice, int diviseur){
    if(diviseur==0)
       throw exception();
    if(indice<0 || indice > sizeof(tableau) / sizeof(int))  
       throw exception(); 
return tableau[indice]/diviseur;
}
};
int Test::tableau[10] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() {
int x, y;
cout << "Entrez l’indice de l’entier à diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
try{
    int res = Test::division(x,y);
    cout << "Le résultat de la division est: "<< endl;
}catch (exception const& e) {
    cerr<<"An error has occurred."<<endl;
}
return 0; }