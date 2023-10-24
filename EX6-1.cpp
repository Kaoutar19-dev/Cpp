#include<iostream>
using namespace std;
int incrementer(int a){
  a+=1;
}

void permuter(int a, int b){
  int c=0;
  c=a;
  a=b;
  b=c;
}

int main(){
  int a,b;
  cout<<"entrer la valeur de a et b"<<endl<<"a= ";
  cin>>a;
  cout<<endl<<"b= ";
  cin>>b;
  permuter(a,b);
  cout<<endl<<"a= "<<a<<"b= "<<b<<endl;
  return 0;
}