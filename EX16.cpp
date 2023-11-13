#include<iostream>
struct elem {
    int data;
    elem* next;

    elem(int v) : data(v), next(nullptr) {}
};

class liste {
    elem* first;
    public : 
    liste() : first(nullptr) {}
    void ajouter(int val) {
        elem* nelm = new elem(val);
        nelm -> next = first;
        first = nelm;
    }

    void supprimer() {
        if(first != nullptr) {
            elem* temp = first;
            first = first -> next;
            delete temp;
        }
    }

    void affiche() {
        elem* temp = first;
        while(temp != nullptr) {
            std::cout<<temp->data<<std::endl;
            temp = temp-> next;
        }
    }
    ~liste() {
        while(first !=nullptr){
            supprimer();
        }
    }
};

int main() {
    liste l;

    l.ajouter(10);
    l.ajouter(20);
    l.ajouter(30);

    std::cout << "Liste : ";
    l.affiche();

    l.supprimer();
    std::cout << "Après suppression du premier élément : ";
    l.affiche();

    return 0;
}
