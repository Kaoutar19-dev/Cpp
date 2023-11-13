#include<iostream>
#include<cmath>
using namespace std;
class vectd {
    double x;
    double y;
    double z;
    public :
    vectd(double a=0, double b=0, double c=0) : x(a), y(b), z(c) {};
    void display() {
        cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;}
    vectd sum(vectd  other) {
        return vectd(x + other.x, y+other.y, z+other.z);
    }
    double pro(vectd  other) {
        return x * other.x + y*other.y + z*other.z;
    }
    bool coi(vectd  other){
        return (x==other.x && y==other.y && z==other.z);
    }
    double norm(){
        return sqrt(x*x + y*y + z*z);
    }
    static vectd maxnorm(vectd v, vectd ve){
        return v.norm() >= ve.norm() ? v : ve;
    }
    
};

int main() {
    vectd v(1.0, 2.0, 3.0);
    vectd ve(4.0, 5.0, 6.0);
    v.display();
    ve.display();
    vectd sum = v.sum(ve);
    sum.display();
    vectd prod = v.pro(ve);
    prod.display();
    bool eg = v.coi(ve);
    cout<<"egalité = "<<eg<<endl;
    vectd normv = v.norm();
    vectd normve = ve.norm();
    vectd max = vectd :: maxnorm(v, ve);
    
    max.display();
    return 0;
    
}