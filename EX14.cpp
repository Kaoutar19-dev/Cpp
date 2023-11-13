#include<iostream>
using namespace std;
//class définissant une liste simplement chainée
class epile {
    public :
    int data;
    epile* next;

    epile(int v) : data(v), next(nullptr) {}
};
class pile {
    epile* sommet;
    public :
    pile() : sommet(nullptr) {}
    ~pile() {
        while(!nvide())
        pop();
    }

    bool nvide() {
        return sommet == nullptr;

    }

    int pop() {
        if(!nvide()) {
            epile* temp = sommet;
            sommet = sommet->next;
            int val = temp->data ;
            delete temp;
            return val;
        }
        return -1;
    }

    void push(int v) {
        epile* nele = new epile(v);
        nele -> next = sommet;
        sommet = nele;
    }
};
int main() {
    pile p;
    pile pi;
    p.push(2);
    p.push(3);
    p.push(5);
    pi.push(7);
    pi.push(9);

    while(!p.nvide()) {
        int v = p.pop();
        cout<<"P : "<<v<<endl;
    }
    while(!pi.nvide()) {
        int v = pi.pop();
        cout<<"P2 : "<<v<<endl;
    }
}