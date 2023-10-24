#include<iostream>
using namespace std;
int main(){
  int a,*p,i,*q;
  cout<<"entrer la taille du tableau"<<endl<<"a = ";
  cin>>a;
  p = (int*) malloc(a * sizeof(int));
  for(i=0;i<a;i++){
    cout<<endl<<"T["<<i+1<<"] = ";
    cin>>*(p+i);
  }
  q = (int*) malloc(a * sizeof(int));
  for(i=0;i<a;i++){
    (*(q+i))=(*(p+i)) * (*(p+i));
  }
  delete[] p;
  for(i=0;i<a;i++)
    cout<<endl<<"Q["<<i+1<<"] = "<<*(q+i)<<endl;
  delete[] q;
}