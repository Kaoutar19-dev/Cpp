#include<iostream>
#include<list>
#include<string>
using namespace std;

struct pers {
    string nom;
    string pre;
    int age;
    
};

bool comparer(pers const& p1, pers const& p2) {
    int c = p1.nom.compare(p2.nom);
    if(c==0)
    return p1.pre < p2.pre;
    return c<0;
}

int main(){
    list<pers> lp;
    int n;
    cout << "Combien de personnes souhaitez-vous entrer ? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        pers p;
        cout << "Entrez le nom de la personne " << i + 1 << ": ";
        cin >> p.nom;
       cout << "Entrez le prénom de la personne " << i + 1 << ": ";
        cin >> p.pre;
        cout << "Entrez l'âge de la personne " << i + 1 << ": ";
        cin >> p.age;
        lp.push_back(p);
    }

    lp.sort(comparer);
    for(pers const& p : lp ){
        cout<<"nom: "<<p.nom<<", prenom: "<<p.pre<<", age: "<<p.age<<endl;
    }
    return 0;
}