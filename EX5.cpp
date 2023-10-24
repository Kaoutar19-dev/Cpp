#include<iostream>
using namespace std;
int main(){
  int a=15;
  int &ref_a = a;
  int *p_a = a;
  cout<<"a = "<<a<<" son adress est "<<p_a<<endl;
  return 0;
}