#include<iostream>
using namespace std;
int main(){
  int n, i;
  float sum=0;
  cout<<"enter the value of n "<<endl<<"n = ";
  cin>>n;
  for(i=1;i<n+1;i++)
    sum = (sum + (float) 1/i);
  cout<<" Sum = "<<sum<<endl;
  return 0;}
