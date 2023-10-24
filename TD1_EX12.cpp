#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int i, j, k, l;
  cout<<setw(4)<<" "<<setw(4)<<"I";
  for(i=1;i<11;i++){
    cout<<setw(4)<<i;
  }
  cout<<endl<<"-------------------------------------------------"<<endl;
  for(k=1;k<11;k++){
    cout<<setw(4)<<k<<setw(4)<<"I";
    for(j=1;j<11;j++){
      cout<<setw(4)<<k*j;
     }
      cout<<endl;}
  return 0;
  
}
