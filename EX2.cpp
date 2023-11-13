#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void affiche(list<int> const& l) {
    for(int n : l)
    cout<<n<<endl;
}
//tri de bulle
void tribulle(list<int>& l) {
    for (list<int>::iterator i = l.begin(); i != l.end(); ++i) {
        for (list<int>::iterator j = l.begin(); j != l.end(); ++j) {
            if (*i < *j) {
                swap(*i, *j);
            }
        }}
}
//tri par insertion
void triins(list<int>& l) {
     for (list<int>::iterator i = next(l.begin()); i != l.end(); ++i) {
         cle = *i;
        auto j = prev(i);
        while (j != liste.begin() && *j > cle) {
            auto nextJ = prev(j);
            swap(*j, *nextJ);
            j = nextJ;
        }
        *next(j) = cle;
    }
}