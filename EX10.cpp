#include<iostream>
using namespace std;
int main(){
  int u1=0, u2=1, n, un, i;
  cout<<"enter the value of n"<<endl<<"n = ";
  cin>>n;
  cout<<endl<<u1<<" "<<u2;
  for(i=2;i<n;i++){
    un = u1 + u2;
    cout<<" "<<un<<" ";
    u1 = u2;
    u2 = un;
  }
  return 0;
}