#include<iostream>
using namespace std;
class animal {
    protected :
    string nom;
    int age;
    public :
    void set(string s, int a) {
        this->nom = s;
        this->age = a;
    }
};
class zebra : public animal {
    public :
    void set(string s, int a, string l){
        this->nom = s;
        this->age = a;
        cout<<"nom est: "<<nom<<"age est: "<<age<<"lieu est: "<<l<<endl;
    }
    
};
class dolphin : public animal {
    public :
    void set(string s, int a, string l){
        this->nom = s;
        this->age = a;
        cout<<"nom est: "<<nom<<"age est: "<<age<<"lieu est: "<<l<<endl;
    }
    
};

int main() {
    zebra z;
    dolphin d;
    z.set("Zébulon", 5, "Afrique");
    d.set("Flipper", 10, "Océan Atlantique");
    return 0;

}