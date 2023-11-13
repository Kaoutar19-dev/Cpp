#include<iostream>
using namespace std;
class file {
    char* ptr;
    int lng;
    public: 
    file(int t) : lng(t) {
        ptr = new char[lng];
    }
    ~file(){
        delete[] ptr;
    }
    void create(){
        if(ptr!= nullptr) {
            delete[] ptr;
            ptr = new char[lng];
        }
    }

    void fil() {
        if(ptr!=nullptr) {
            for(int i=0; i<lng; i++)
            ptr[i] = 'A' + (i%26);
        }
    }

    void affiche() {
        if(ptr!=nullptr)
        for(int i=0; i<lng; i++) 
            cout<<ptr[i];    
    }
};

int main() {
    file* f = new file(100);
    f->create();
    f->fil();
    f->affiche();
    delete f;
    return 0;

}