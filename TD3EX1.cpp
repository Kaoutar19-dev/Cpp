#include<iostream>
using namespace std;
class Complexe {
double real;
double imaginary;
public:
  Complexe(double re, double im) : real(r), imaginary(im) {}
  Complexe operator+(Complexe const& other) {
    return Complexe(real + other.real, imaginary + other.imaginary);
  }
  Complexe operator-(Complexe const& other) {
    return Complexe(real - other.real, imaginary - other.imaginary);
  }
  Complexe operator*(Complexe const& other) {
    return Complexe((real * other.real - imaginary * other.imaginary), (real * other.imaginary + imaginary * other.real));
  }
  
}

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

  cout<<"the result of addition of two complex numbers is "<<add<<"."<<endl;
  cout<<"the result of substraction of two complex numbers is "<<sub<<"."<<endl;
  cout<<"the result of multiplication of two complex numbers is "<<mul<<"."<<endl;
  return 0;


}
