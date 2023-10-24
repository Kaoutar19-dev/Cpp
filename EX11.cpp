#include<iostream>
using namespace std;
int main(){
  int h;
  cout<<"enter the value of height"<<endl<<"h = ";
  cin>>h;
  if (h <= 0) {
    cout << "La hauteur doit être un nombre positif." << endl;
    return 1;
    }
   for (int l = 1; l <= h; l++) {
        for (int sp = 1; sp <= h - l; sp++) {
            cout << " ";
        }
        for (int star = 1; star <= 2 * l - 1; star++) {
          cout << "*";
        }
        cout << endl;
    }
    return 0;
}