#include<iostream>
using namespace std;
static int i;
void Count(){
  i++;
}
int main(){
  Count();
  Count();
  Count();
  Count();
  Count();
  cout<<"appel numero "<<i<<endl;
  return 0;
}
