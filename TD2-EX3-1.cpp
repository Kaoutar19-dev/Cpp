#include<iostream>
using namespace std;
int main(){
  int a[10], max=0, min,i;
  for(i=1;i<11;i++){
    cout<<"entrer la valeur de a["<<i<<"]"<<endl;
    cin>>a[i];
    min=10;
    if(i>1 && min>a[i])
      min = a[i];
   
    if(i>1 && a[i]>max)
      max = a[i];
    
    }
    cout<<"le plus grand nombre est "<<max<<" et le plus petit nombre est "<<min<<endl;
    return 0 ;
  }


