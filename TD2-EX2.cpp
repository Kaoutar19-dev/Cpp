#include<iostream>
using namespace std;
int F1(int n){
  if(n%2==0)
  cout<<"il est pair"<<endl;
  else
  cout<<"il est impair"<<endl;
  return n;
}

int F2(int a){
  if(a%3==0)
    cout<<"il est multiple de 3"<<endl;
  else 
    cout<<"il n'est pas multiple de 3"<<endl;
  return a;
  }

  int main(){
    int x;
    cout<<"entrer la valeur de x"<<endl<<"x = ";
    cin>>x;
    cout<<endl;
    x=F1(x);
    x=F2(x);
    if(x%3==0){
      if(x%6==0)
      cout<<"il est divisible par 6"<<endl;
    }
    return 0;
  }
