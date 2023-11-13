#include<iostream>
using namespace std;
class personne {
    string nom;
    string pre;
    string date;
    public :
    personne(string n, string p, string d): nom(n), pre(p), date(d) {};
    void display(){
        cout<<nom<<endl;
        cout<<pre<<endl;
        cout<<date<<endl;
    }
};
class employer : public personne {
    double sal;
    public : 
    employer(string n, string p, string d, double s): personne(n,p,d),sal(s) {};
    void display(){
        personne :: display();
        cout<<sal<<endl;
    }
};
class chef : public employer {
    string ser;
    public : 
    chef(string n, string p, string d,double s, string se): employer(n,p,d,s),ser(se) {};
    void display(){
        employer :: display();
        cout<<ser<<endl;
    }
};

class directeur : public chef {
    string soc;
    public : 
    directeur(string n, string p, string d,double sa,string se, string s): chef(n,p,d,sa,se),soc(s) {};
    void display(){
        chef :: display();
        cout<<soc<<endl;
    }
};