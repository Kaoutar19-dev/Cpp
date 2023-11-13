#include<iostream>
using namespace std;
class Complexe {
double real;
double imaginary;
public:
  Complexe(double re, double im) : real(re), imaginary(im) {}
  Complexe operator+(Complexe const& other) {
    return Complexe(real + other.real, imaginary + other.imaginary);
  }
  Complexe operator-(Complexe const& other) {
    return Complexe(real - other.real, imaginary - other.imaginary);
  }
  Complexe operator*(Complexe const& other) {
    return Complexe((real * other.real - imaginary * other.imaginary), (real * other.imaginary + imaginary * other.real));
  }

  void display() {
    cout<<real<<"+"<<imaginary<<"i"<<endl;
  }
  
};

int main() {
  double re, im;
  cout<<"enter the \"real\" section of the first number"<<endl<< "real = ";
  cin>>re;
  cout<<"enter the \"imaginary\" section of the first number"<<endl<< "imaginary = ";
  cin>>im;
  Complexe num1(re,im);
  cout<<"enter the \"real\" section of the second number"<<endl<< "real = ";
  cin>>re;
  cout<<"enter the \"imaginary\" section of the second number"<<endl<< "imaginary = ";
  cin>>im;
  Complexe num2(re,im);

  Complexe add = num1 + num2;
  Complexe sub = num1 - num2;
  Complexe mul = num1 * num2;
  add.display();
  sub.display();
  mul.display();
 
  return 0;


}