#include<iostream>
using namespace std;
class complexe {
    double real;
    double imaginary;
    public:
    complexe(int r, int i) : real(r), imaginary(i) {};
    complexe add(complexe const& other) {
        return complexe(real + other.real, imaginary+other.imaginary);
    }
    complexe sou(complexe const& other) {
        return complexe(real - other.real, imaginary-other.imaginary);
    }
    complexe mul(complexe const& other) {
        double n_re= real*other.real - imaginary*other.imaginary;
        double n_im = real*other.imaginary + imaginary * other.real;
        return complexe(real + other.real, imaginary+other.imaginary);
    }
    complexe div(complexe const& other) {
         double den = other.real * other.real + other.real * other.real;
        double n_re = (real*other.real + imaginary*other.imaginary)/den;
        double n_im = (real*other.imaginary - imaginary*other.real)/den;
        return complexe(n_re, n_im);
    }
    void display() {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
};

int main() {
    int r,i;
    cout<<"premier reel = ";
    cin>>r;
    cout<<"premier imaginaire = ";
    cin>>i;
    complexe o1(r,i);
    cout<<"second reel = ";
    cin>>r;
    cout<<"second imaginaire = ";
    cin>>i;
    complexe o2(r,i);
    complexe res(0,0);
    res = o1.add(o2);
    res.display();
    return 0;

}